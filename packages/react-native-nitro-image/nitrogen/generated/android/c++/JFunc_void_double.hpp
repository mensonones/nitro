///
/// JFunc_void_double.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include <functional>

#include <functional>

namespace margelo::nitro::image {

  using namespace facebook;

  /**
   * C++ representation of the callback Func_void_double.
   * This is a Kotlin `(num: Double) -> Unit`, backed by a `std::function<...>`.
   */
  struct JFunc_void_double final: public jni::HybridClass<JFunc_void_double> {
  public:
    static jni::local_ref<JFunc_void_double::javaobject> fromCpp(const std::function<void(double /* num */)>& func) {
      return JFunc_void_double::newObjectCxxArgs(func);
    }

  public:
    void call(double num) {
      _func(num);
    }

  public:
    inline const std::function<void(double /* num */)>& getFunction() const {
      return _func;
    }

  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/image/Func_void_double;";
    static void registerNatives() {
      registerHybrid({makeNativeMethod("call", JFunc_void_double::call)});
    }

  private:
    explicit JFunc_void_double(const std::function<void(double /* num */)>& func): _func(func) { }

  private:
    friend HybridBase;
    std::function<void(double /* num */)> _func;
  };

} // namespace margelo::nitro::image
