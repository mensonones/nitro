///
/// JFunc_void_std__string.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include <functional>
#include <NitroModules/JSIConverter.hpp>

#include <functional>
#include <string>

namespace margelo::nitro::image {

  using namespace facebook;

  /**
   * C++ representation of the callback Func_void_std__string.
   * This is a Kotlin `(path: String) -> Unit`, backed by a `std::function<...>`.
   */
  struct JFunc_void_std__string final: public jni::HybridClass<JFunc_void_std__string> {
  public:
    static jni::local_ref<JFunc_void_std__string::javaobject> fromCpp(const std::function<void(const std::string& /* path */)>& func) {
      return JFunc_void_std__string::newObjectCxxArgs(func);
    }
    static jni::local_ref<JFunc_void_std__string::javaobject> fromCpp(std::function<void(const std::string& /* path */)>&& func) {
      return JFunc_void_std__string::newObjectCxxArgs(std::move(func));
    }

  public:
    void call(const jni::alias_ref<jni::JString>& path) {
      return _func(path->toStdString());
    }

  public:
    inline const std::function<void(const std::string& /* path */)>& getFunction() const noexcept {
      return _func;
    }

  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/image/Func_void_std__string;";
    static void registerNatives() {
      registerHybrid({makeNativeMethod("call", JFunc_void_std__string::call)});
    }

  private:
    explicit JFunc_void_std__string(const std::function<void(const std::string& /* path */)>& func): _func(func) { }
    explicit JFunc_void_std__string(std::function<void(const std::string& /* path */)>&& func): _func(std::move(func)) { }

  private:
    friend HybridBase;
    std::function<void(const std::string& /* path */)> _func;
  };

} // namespace margelo::nitro::image

namespace margelo::nitro {

  // (Args...) => T <> JFunc_void_std__string
  template <>
  struct JSIConverter<JFunc_void_std__string::javaobject> final {
    static inline jni::alias_ref<JFunc_void_std__string::javaobject> fromJSI(jsi::Runtime& runtime, const jsi::Value& arg) {
      return JFunc_void_std__string::fromCpp(JSIConverter<std::function<void(const std::string& /* path */)>>::fromJSI(runtime, arg));
    }
    static inline jsi::Value toJSI(jsi::Runtime& runtime, const jni::alias_ref<JFunc_void_std__string::javaobject>& arg) {
      return JSIConverter<std::function<void(const std::string& /* path */)>>::toJSI(runtime, arg->cthis()->getFunction());
    }
    static inline bool canConvert(jsi::Runtime& runtime, const jsi::Value& value) {
      return JSIConverter<std::function<void(const std::string& /* path */)>>::canConvert(runtime, value);
    }
  };

} // namespace margelo::nitro
