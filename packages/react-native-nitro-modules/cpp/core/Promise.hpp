//
// Created by Marc Rousavy on 18.11.24.
//

#pragma once

namespace margelo::nitro {
template <typename>
class Callback;
template <typename>
class Promise;
} // namespace margelo::nitro

#include "AssertPromiseState.hpp"
#include "CallableNativeFunction.hpp"
#include "Callback.hpp"
#include "NitroDefines.hpp"
#include "ThreadPool.hpp"
#include "TypeInfo.hpp"
#include <exception>
#include <future>
#include <jsi/jsi.h>
#include <memory>
#include <mutex>
#include <type_traits>
#include <variant>

namespace margelo::nitro {

using namespace facebook;

template <typename TResult>
class Promise final {
public:
  using OnResolvedFunc = Callback<void(const TResult&)>;
  using OnRejectedFunc = Callback<void(const std::exception_ptr&)>;

public:
  // Promise cannot be deleted.
  Promise(const Promise&) = delete;
  // Promise can be moved.
  Promise(Promise&&) = default;

private:
  Promise() {
    _mutex = std::make_unique<std::mutex>();
  }

public:
  /**
   * Creates a new pending Promise that has to be resolved
   * or rejected with `resolve(..)` or `reject(..)`.
   */
  static std::shared_ptr<Promise> create() {
    return std::shared_ptr<Promise>(new Promise());
  }

  /**
   * Creates a Promise that runs the given function `run` on a separate Thread pool.
   */
  static std::shared_ptr<Promise> async(std::function<TResult()>&& run) {
    auto promise = create();
    ThreadPool::shared().run([run = std::move(run), promise]() {
      try {
        // Run the code, then resolve.
        TResult result = run();
        promise->resolve(std::move(result));
      } catch (...) {
        // It threw any kind of exception.
        promise->reject(std::current_exception());
      }
    });
    return promise;
  }

  /**
   * Creates a Promise and awaits the given future on a background Thread.
   * Once the future resolves or rejects, the Promise resolves or rejects.
   */
  static std::shared_ptr<Promise> awaitFuture(std::future<TResult>&& future) {
    auto sharedFuture = std::make_shared<std::future<TResult>>(std::move(future));
    return async([sharedFuture = std::move(sharedFuture)]() { return sharedFuture->get(); });
  }

  /**
   * Creates an immediately resolved Promise.
   */
  static std::shared_ptr<Promise> resolved(TResult&& result) {
    auto promise = create();
    promise->resolve(std::move(result));
    return promise;
  }
  /**
   * Creates an immediately rejected Promise.
   */
  template <typename Error>
  static std::shared_ptr<Promise> rejected(Error&& error) {
    auto promise = create();
    promise->reject(std::forward<Error>(error));
    return promise;
  }

public:
  /**
   * Resolves this Promise with the given result, and calls any pending listeners.
   */
  void resolve(TResult&& result) {
    std::unique_lock lock(*_mutex);
#ifdef NITRO_DEBUG
    assertPromiseState(*this, PromiseTask::WANTS_TO_RESOLVE);
#endif
    _result = std::move(result);
    for (const auto& onResolved : _onResolvedListeners) {
      onResolved(std::get<TResult>(_result));
    }
  }
  void resolve(const TResult& result) {
    std::unique_lock lock(*_mutex);
#ifdef NITRO_DEBUG
    assertPromiseState(*this, PromiseTask::WANTS_TO_RESOLVE);
#endif
    _result = result;
    for (const auto& onResolved : _onResolvedListeners) {
      onResolved(std::get<TResult>(_result));
    }
  }
  /**
   * Rejects this Promise with the given error, and calls any pending listeners.
   */
  void reject(const std::exception_ptr& exception) {
    std::unique_lock lock(*_mutex);
#ifdef NITRO_DEBUG
    assertPromiseState(*this, PromiseTask::WANTS_TO_REJECT);
#endif
    _result = exception;
    for (const auto& onRejected : _onRejectedListeners) {
      onRejected(exception);
    }
  }
  void reject(const std::exception& exception) {
    std::unique_lock lock(*_mutex);
#ifdef NITRO_DEBUG
    assertPromiseState(*this, PromiseTask::WANTS_TO_REJECT);
#endif
    _result = std::make_exception_ptr(exception);
    const std::exception_ptr& error = std::get<std::exception_ptr>(_result);
    for (const auto& onRejected : _onRejectedListeners) {
      onRejected(error);
    }
  }

public:
  /**
   * Add a listener that will be called when the Promise gets resolved.
   * If the Promise is already resolved, the listener will be immediately called.
   */
  void addOnResolvedListener(const OnResolvedFunc& onResolved) {
    std::unique_lock lock(*_mutex);
    if (std::holds_alternative<TResult>(_result)) {
      // Promise is already resolved! Call the callback immediately
      onResolved(std::get<TResult>(_result));
    } else {
      // Promise is not yet resolved, put the listener in our queue.
      _onResolvedListeners.push_back(onResolved);
    }
  }
  void addOnResolvedListenerCopy(const OnResolvedFunc& onResolved) {
    std::unique_lock lock(*_mutex);
    if (std::holds_alternative<TResult>(_result)) {
      // Promise is already resolved! Call the callback immediately
      onResolved(std::get<TResult>(_result));
    } else {
      // Promise is not yet resolved, put the listener in our queue.
      _onResolvedListeners.push_back(onResolved);
    }
  }
  void addOnResolvedListener(std::function<void(TResult)>&& func) {
    auto callable = CallableNativeFunction<void(const TResult&)>::create(std::move(func));
    Callback<void(const TResult&)> onResolved(callable);
    return addOnResolvedListener(onResolved);
  }

  /**
   * Add a listener that will be called when the Promise gets rejected.
   * If the Promise is already rejected, the listener will be immediately called.
   */
  void addOnRejectedListener(const OnRejectedFunc& onRejected) {
    std::unique_lock lock(*_mutex);
    if (std::holds_alternative<std::exception_ptr>(_result)) {
      // Promise is already rejected! Call the callback immediately
      onRejected(std::get<std::exception_ptr>(_result));
    } else {
      // Promise is not yet rejected, put the listener in our queue.
      _onRejectedListeners.push_back(onRejected);
    }
  }
  void addOnRejectedListener(std::function<void(const std::exception_ptr&)>&& func) {
    auto callable = CallableNativeFunction<void(const std::exception_ptr&)>::create(std::move(func));
    Callback<void(const std::exception_ptr&)> onRejected(callable);
    return addOnRejectedListener(onRejected);
  }

public:
  /**
   * Gets an awaitable `std::future<T>` for this `Promise<T>`.
   */
  std::future<TResult> await() {
    auto promise = std::make_shared<std::promise<void>>();
    Callback<void(const TResult&)> onResolved(CallableNativeFunction<void(const TResult&)>::create(
        [promise](const TResult& result) { promise->set_value(std::forward<TResult>(result)); }));
    Callback<void(const std::exception_ptr&)> onRejected(CallableNativeFunction<void(const std::exception_ptr& error)>::create(
        [promise](const std::exception_ptr& error) { promise->set_exception(error); }));
    addOnResolvedListener(std::move(onResolved));
    addOnRejectedListener(std::move(onRejected));
    return promise->get_future();
  }

public:
  /**
   * Get the result of the Promise if it has been resolved.
   * If the Promise is not resolved, this will throw.
   */
  inline const TResult& getResult() {
    if (!isResolved()) {
      throw std::runtime_error("Cannot get result when Promise is not yet resolved!");
    }
    return std::get<TResult>(_result);
  }
  /**
   * Get the error of the Promise if it has been rejected.
   * If the Promise is not rejected, this will throw.
   */
  inline const std::exception_ptr& getError() {
    if (!isRejected()) {
      throw std::runtime_error("Cannot get error when Promise is not yet rejected!");
    }
    return std::get<std::exception_ptr>(_result);
  }

public:
  /**
   * Gets whether this Promise has been successfully resolved with a result, or not.
   */
  [[nodiscard]]
  inline bool isResolved() const noexcept {
    return std::holds_alternative<TResult>(_result);
  }
  /**
   * Gets whether this Promise has been rejected with an error, or not.
   */
  [[nodiscard]]
  inline bool isRejected() const noexcept {
    return std::holds_alternative<std::exception_ptr>(_result);
  }
  /**
   * Gets whether this Promise has not yet been resolved nor rejected.
   */
  [[nodiscard]]
  inline bool isPending() const noexcept {
    return std::holds_alternative<std::monostate>(_result);
  }

private:
  std::variant<std::monostate /* pending */, TResult /* resolved */, std::exception_ptr /* rejected */> _result;
  std::vector<OnResolvedFunc> _onResolvedListeners;
  std::vector<OnRejectedFunc> _onRejectedListeners;
  std::unique_ptr<std::mutex> _mutex;
};

// Specialization for void
template <>
class Promise<void> final {
public:
  using OnResolvedFunc = Callback<void()>;
  using OnRejectedFunc = Callback<void(const std::exception_ptr&)>;

public:
  Promise(const Promise&) = delete;
  Promise(Promise&&) = default;

private:
  Promise() {
    _mutex = std::make_unique<std::mutex>();
  }

public:
  static std::shared_ptr<Promise> create() {
    return std::shared_ptr<Promise>(new Promise());
  }

  static std::shared_ptr<Promise> async(std::function<void()>&& run) {
    auto promise = create();
    ThreadPool::shared().run([run = std::move(run), promise]() {
      try {
        // Run the code, then resolve.
        run();
        promise->resolve();
      } catch (...) {
        // It threw, reject it.
        promise->reject(std::current_exception());
      }
    });
    return promise;
  }

  static std::shared_ptr<Promise> awaitFuture(std::future<void>&& future) {
    auto sharedFuture = std::make_shared<std::future<void>>(std::move(future));
    return async([sharedFuture = std::move(sharedFuture)]() { sharedFuture->get(); });
  }

  static std::shared_ptr<Promise> resolved() {
    auto promise = create();
    promise->resolve();
    return promise;
  }
  template <typename Error>
  static std::shared_ptr<Promise> rejected(Error&& error) {
    auto promise = create();
    promise->reject(std::forward<Error>(error));
    return promise;
  }

public:
  void resolve() {
    std::unique_lock lock(*_mutex);
#ifdef NITRO_DEBUG
    assertPromiseState(*this, PromiseTask::WANTS_TO_RESOLVE);
#endif
    _isResolved = true;
    for (const auto& onResolved : _onResolvedListeners) {
      onResolved();
    }
  }
  void reject(const std::exception_ptr& exception) {
    std::unique_lock lock(*_mutex);
#ifdef NITRO_DEBUG
    assertPromiseState(*this, PromiseTask::WANTS_TO_REJECT);
#endif
    _error = exception;
    for (const auto& onRejected : _onRejectedListeners) {
      onRejected(exception);
    }
  }
  void reject(const std::exception& exception) {
    std::unique_lock lock(*_mutex);
#ifdef NITRO_DEBUG
    assertPromiseState(*this, PromiseTask::WANTS_TO_REJECT);
#endif
    _error = std::make_exception_ptr(exception);
    for (const auto& onRejected : _onRejectedListeners) {
      onRejected(_error);
    }
  }

public:
  void addOnResolvedListener(OnResolvedFunc&& onResolved) {
    std::unique_lock lock(*_mutex);
    if (_isResolved) {
      onResolved();
    } else {
      _onResolvedListeners.push_back(std::move(onResolved));
    }
  }
  void addOnResolvedListener(const OnResolvedFunc& onResolved) {
    std::unique_lock lock(*_mutex);
    if (_isResolved) {
      onResolved();
    } else {
      _onResolvedListeners.push_back(onResolved);
    }
  }
  void addOnResolvedListener(std::function<void()>&& func) {
    auto callable = CallableNativeFunction<void()>::create(std::move(func));
    Callback<void()> onRejected(callable);
    return addOnResolvedListener(onRejected);
  }

  void addOnRejectedListener(OnRejectedFunc&& onRejected) {
    std::unique_lock lock(*_mutex);
    if (_error) {
      onRejected(_error);
    } else {
      // Promise is not yet rejected, put the listener in our queue.
      _onRejectedListeners.push_back(std::move(onRejected));
    }
  }
  void addOnRejectedListener(const OnRejectedFunc& onRejected) {
    std::unique_lock lock(*_mutex);
    if (_error) {
      onRejected(_error);
    } else {
      // Promise is not yet rejected, put the listener in our queue.
      _onRejectedListeners.push_back(onRejected);
    }
  }
  void addOnRejectedListener(std::function<void(const std::exception_ptr&)>&& func) {
    auto callable = CallableNativeFunction<void(const std::exception_ptr&)>::create(std::move(func));
    Callback<void(const std::exception_ptr&)> onRejected(callable);
    return addOnRejectedListener(onRejected);
  }

public:
  std::future<void> await() {
    auto promise = std::make_shared<std::promise<void>>();
    Callback<void()> onResolved(CallableNativeFunction<void()>::create([promise]() { promise->set_value(); }));
    Callback<void(const std::exception_ptr&)> onRejected(CallableNativeFunction<void(const std::exception_ptr&)>::create(
        [promise](const std::exception_ptr& error) { promise->set_exception(error); }));
    addOnResolvedListener(std::move(onResolved));
    addOnRejectedListener(std::move(onRejected));
    return promise->get_future();
  }

public:
  inline const std::exception_ptr& getError() {
    if (!isRejected()) {
      throw std::runtime_error("Cannot get error when Promise is not yet rejected!");
    }
    return _error;
  }

public:
  [[nodiscard]]
  inline bool isResolved() const noexcept {
    return _isResolved;
  }
  [[nodiscard]]
  inline bool isRejected() const noexcept {
    return _error != nullptr;
  }
  [[nodiscard]]
  inline bool isPending() const noexcept {
    return !isResolved() && !isRejected();
  }

private:
  std::unique_ptr<std::mutex> _mutex;
  bool _isResolved = false;
  std::exception_ptr _error;
  std::vector<OnResolvedFunc> _onResolvedListeners;
  std::vector<OnRejectedFunc> _onRejectedListeners;
};

} // namespace margelo::nitro
