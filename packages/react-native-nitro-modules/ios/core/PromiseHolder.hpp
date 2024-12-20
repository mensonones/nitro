//
//  ArrayBufferHolder.hpp
//  react-native-nitro
//
//  Created by Marc Rousavy on 14.08.24.
//

#pragma once

#include "NitroDefines.hpp"
#include "Promise.hpp"
#include <exception>
#include <memory>
#include <type_traits>

namespace margelo::nitro {

using namespace facebook;

/**
 * Holds instances of `std::shared_ptr<Promise<T>>`.
 * The reason this exists is for performance optimizations, as well as easier listeners for Swift.
 */
template <typename T>
class PromiseHolder final {
public:
  PromiseHolder(const std::shared_ptr<Promise<T>>& promise) : _promise(promise) {}

public:
  static PromiseHolder<T> create() {
    return PromiseHolder<T>(Promise<T>::create());
  }

public:
  void resolve(T value) const {
    _promise->resolve(std::move(value));
  }

  void reject(const std::exception_ptr& exception) const {
    _promise->reject(exception);
  }

public:
  void addOnResolvedListener(std::function<void(T)> onResolved) const {
    _promise->addOnResolvedListener([=](const T& result) { onResolved(result); });
  }

  void addOnRejectedListener(const std::function<void(std::exception_ptr)>& onRejected) const {
    _promise->addOnRejectedListener([=](const std::exception_ptr& error) { onRejected(error); });
  }

public:
  inline std::shared_ptr<Promise<T>> getPromise() const {
    return _promise;
  }

private:
  std::shared_ptr<Promise<T>> _promise;
};

template <>
class PromiseHolder<void> final {
public:
 PromiseHolder(const std::shared_ptr<Promise<void>>& promise) : _promise(promise) {}

public:
 static PromiseHolder<void> create() {
   return PromiseHolder<void>(Promise<void>::create());
 }

public:
 void resolve() const {
   _promise->resolve();
 }

 void reject(const std::exception_ptr& exception) const {
   _promise->reject(exception);
 }

public:
 void addOnResolvedListener(std::function<void()> onResolved) const {
   _promise->addOnResolvedListener([=]() { onResolved(); });
 }

 void addOnRejectedListener(const std::function<void(std::exception_ptr)>& onRejected) const {
   _promise->addOnRejectedListener([=](const std::exception_ptr& error) { onRejected(error); });
 }

public:
 inline std::shared_ptr<Promise<void>> getPromise() const {
   return _promise;
 }

private:
 std::shared_ptr<Promise<void>> _promise;
};

} // namespace margelo::nitro
