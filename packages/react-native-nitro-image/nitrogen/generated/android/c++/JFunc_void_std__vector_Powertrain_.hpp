///
/// JFunc_void_std__vector_Powertrain_.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include <functional>

#include <functional>
#include <vector>
#include "Powertrain.hpp"
#include "JPowertrain.hpp"

namespace margelo::nitro::image {

  using namespace facebook;

  /**
   * C++ representation of the callback Func_void_std__vector_Powertrain_.
   * This is a Kotlin `(array: Array<Powertrain>) -> Unit`, backed by a `std::function<...>`.
   */
  struct JFunc_void_std__vector_Powertrain_ final: public jni::HybridClass<JFunc_void_std__vector_Powertrain_> {
  public:
    static jni::local_ref<JFunc_void_std__vector_Powertrain_::javaobject> fromCpp(const std::function<void(const std::vector<Powertrain>& /* array */)>& func) {
      return JFunc_void_std__vector_Powertrain_::newObjectCxxArgs(func);
    }

  public:
    void call(jni::alias_ref<jni::JArrayClass<JPowertrain>> array) {
      _func([&]() {
              size_t __size = array->size();
              std::vector<Powertrain> __vector;
              __vector.reserve(__size);
              for (size_t __i = 0; __i < __size; __i++) {
                auto __element = array->getElement(__i);
                __vector.push_back(__element->toCpp());
              }
              return __vector;
            }());
    }

  public:
    inline const std::function<void(const std::vector<Powertrain>& /* array */)>& getFunction() const {
      return _func;
    }

  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/image/Func_void_std__vector_Powertrain_;";
    static void registerNatives() {
      registerHybrid({makeNativeMethod("call", JFunc_void_std__vector_Powertrain_::call)});
    }

  private:
    explicit JFunc_void_std__vector_Powertrain_(const std::function<void(const std::vector<Powertrain>& /* array */)>& func): _func(func) { }

  private:
    friend HybridBase;
    std::function<void(const std::vector<Powertrain>& /* array */)> _func;
  };

} // namespace margelo::nitro::image
