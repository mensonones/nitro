//
// Created by Marc Rousavy on 21.02.24.
//

#pragma once

// Forward declare a few of the common types that might have cyclic includes.
namespace margelo::nitro {
class Dispatcher;

template <typename T, typename Enable>
struct JSIConverter;
} // namespace margelo::nitro

#include "JSIConverter.hpp"

#include "Dispatcher.hpp"
#include "Promise.hpp"
#include "TypeInfo.hpp"
#include <jsi/jsi.h>
#include <memory>
#include <exception>

namespace margelo::nitro {

using namespace facebook;

// Promise<T, std::exception> <> Promise<T>
template <typename TResult>
struct JSIConverter<std::shared_ptr<Promise<TResult>>> final {
  static inline std::shared_ptr<Promise<TResult>> fromJSI(jsi::Runtime&, const jsi::Value&) {
    throw std::runtime_error("Promise cannot be converted to a native type - it needs to be awaited first!");
  }

  static inline jsi::Value toJSI(jsi::Runtime& runtime, std::shared_ptr<Promise<TResult>>& promise) {
    if (promise->isPending()) {
      // Get Promise ctor from global
      jsi::Function promiseCtor = runtime.global().getPropertyAsFunction(runtime, "Promise");
      jsi::HostFunctionType executor = [promise](jsi::Runtime& runtime,
                                                 const jsi::Value& thisValue,
                                                 const jsi::Value* arguments,
                                                 size_t count) -> jsi::Value {
        // Get resolver and rejecter from params (as safe nitro JS callbacks)
        auto resolver = JSIConverter<std::function<void(TResult)>>::fromJSI(runtime, arguments[0]);
        auto rejecter = JSIConverter<std::function<void(std::exception)>>::fromJSI(runtime, arguments[1]);
        // Add listeners to `Promise`
        promise->addOnResolvedListener(std::move(resolver));
        promise->addOnRejectedListener(std::move(rejecter));

        return jsi::Value::undefined();
      };
      // Call `Promise` constructor (aka create promise), and pass `executor` function
      return promiseCtor.callAsConstructor(runtime, jsi::Function::createFromHostFunction(runtime,
                                                                                          jsi::PropNameID::forUtf8(runtime, "executor"),
                                                                                          2,
                                                                                          executor));
    } else if (promise->isResolved()) {
      // Promise is already resolved - just return immediately
      jsi::Object promiseObject = runtime.global().getPropertyAsObject(runtime, "Promise");
      jsi::Function createResolvedPromise = promiseObject.getPropertyAsFunction(runtime, "resolve");
      jsi::Value result = JSIConverter<TResult>::toJSI(runtime, promise->getResult());
      return createResolvedPromise.call(runtime, std::move(result));
    } else if (promise->isRejected()) {
      // Promise is already rejected - just return immediately
      jsi::Object promiseObject = runtime.global().getPropertyAsObject(runtime, "Promise");
      jsi::Function createRejectedPromise = promiseObject.getPropertyAsFunction(runtime, "reject");
      jsi::Value error = JSIConverter<std::exception>::toJSI(runtime, promise->getError());
      return createRejectedPromise.call(runtime, std::move(error));
    } else {
      throw std::runtime_error("Promise has invalid state!");
    }
  }

  static inline bool canConvert(jsi::Runtime&, const jsi::Value&) {
    throw std::runtime_error("jsi::Value of type Promise cannot be converted to Promise<> yet!");
  }
};

} // namespace margelo::nitro
