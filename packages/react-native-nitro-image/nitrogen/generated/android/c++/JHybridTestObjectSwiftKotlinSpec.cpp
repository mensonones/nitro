///
/// JHybridTestObjectSwiftKotlinSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "JHybridTestObjectSwiftKotlinSpec.hpp"

// Forward declaration of `HybridTestObjectSwiftKotlinSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridTestObjectSwiftKotlinSpec; }
// Forward declaration of `AnyMap` to properly resolve imports.
namespace NitroModules { class AnyMap; }
// Forward declaration of `Car` to properly resolve imports.
namespace margelo::nitro::image { struct Car; }
// Forward declaration of `Powertrain` to properly resolve imports.
namespace margelo::nitro::image { enum class Powertrain; }
// Forward declaration of `Person` to properly resolve imports.
namespace margelo::nitro::image { struct Person; }
// Forward declaration of `ArrayBuffer` to properly resolve imports.
namespace NitroModules { class ArrayBuffer; }

#include <string>
#include <optional>
#include <memory>
#include "HybridTestObjectSwiftKotlinSpec.hpp"
#include "JHybridTestObjectSwiftKotlinSpec.hpp"
#include <NitroModules/JNISharedPtr.hpp>
#include <NitroModules/AnyMap.hpp>
#include <NitroModules/JAnyMap.hpp>
#include <future>
#include <NitroModules/JPromise.hpp>
#include "Car.hpp"
#include "JCar.hpp"
#include "Powertrain.hpp"
#include "JPowertrain.hpp"
#include "Person.hpp"
#include "JPerson.hpp"
#include <NitroModules/ArrayBuffer.hpp>
#include <NitroModules/JArrayBuffer.hpp>
#include <functional>
#include "JFunc_void.hpp"

namespace margelo::nitro::image {

  jni::local_ref<JHybridTestObjectSwiftKotlinSpec::jhybriddata> JHybridTestObjectSwiftKotlinSpec::initHybrid(jni::alias_ref<jhybridobject> jThis) {
    return makeCxxInstance(jThis);
  }

  void JHybridTestObjectSwiftKotlinSpec::registerNatives() {
    registerHybrid({
      makeNativeMethod("initHybrid", JHybridTestObjectSwiftKotlinSpec::initHybrid),
    });
  }

  size_t JHybridTestObjectSwiftKotlinSpec::getExternalMemorySize() noexcept {
    static const auto method = _javaPart->getClass()->getMethod<jlong()>("getMemorySize");
    return method(_javaPart);
  }

  // Properties
  double JHybridTestObjectSwiftKotlinSpec::getNumberValue() {
    static const auto method = _javaPart->getClass()->getMethod<double()>("getNumberValue");
    auto result = method(_javaPart);
    return result;
  }
  void JHybridTestObjectSwiftKotlinSpec::setNumberValue(double numberValue) {
    static const auto method = _javaPart->getClass()->getMethod<void(double /* numberValue */)>("setNumberValue");
    method(_javaPart, numberValue);
  }
  bool JHybridTestObjectSwiftKotlinSpec::getBoolValue() {
    static const auto method = _javaPart->getClass()->getMethod<jboolean()>("getBoolValue");
    auto result = method(_javaPart);
    return result;
  }
  void JHybridTestObjectSwiftKotlinSpec::setBoolValue(bool boolValue) {
    static const auto method = _javaPart->getClass()->getMethod<void(jboolean /* boolValue */)>("setBoolValue");
    method(_javaPart, boolValue);
  }
  std::string JHybridTestObjectSwiftKotlinSpec::getStringValue() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<jni::JString>()>("getStringValue");
    auto result = method(_javaPart);
    return result->toStdString();
  }
  void JHybridTestObjectSwiftKotlinSpec::setStringValue(const std::string& stringValue) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<jni::JString> /* stringValue */)>("setStringValue");
    method(_javaPart, jni::make_jstring(stringValue));
  }
  int64_t JHybridTestObjectSwiftKotlinSpec::getBigintValue() {
    static const auto method = _javaPart->getClass()->getMethod<int64_t()>("getBigintValue");
    auto result = method(_javaPart);
    return result;
  }
  void JHybridTestObjectSwiftKotlinSpec::setBigintValue(int64_t bigintValue) {
    static const auto method = _javaPart->getClass()->getMethod<void(int64_t /* bigintValue */)>("setBigintValue");
    method(_javaPart, bigintValue);
  }
  std::optional<std::string> JHybridTestObjectSwiftKotlinSpec::getStringOrUndefined() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<jni::JString>()>("getStringOrUndefined");
    auto result = method(_javaPart);
    return result != nullptr ? std::make_optional(result->toStdString()) : std::nullopt;
  }
  void JHybridTestObjectSwiftKotlinSpec::setStringOrUndefined(const std::optional<std::string>& stringOrUndefined) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<jni::JString> /* stringOrUndefined */)>("setStringOrUndefined");
    method(_javaPart, stringOrUndefined.has_value() ? jni::make_jstring(stringOrUndefined.value()) : nullptr);
  }
  std::optional<std::string> JHybridTestObjectSwiftKotlinSpec::getStringOrNull() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<jni::JString>()>("getStringOrNull");
    auto result = method(_javaPart);
    return result != nullptr ? std::make_optional(result->toStdString()) : std::nullopt;
  }
  void JHybridTestObjectSwiftKotlinSpec::setStringOrNull(const std::optional<std::string>& stringOrNull) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<jni::JString> /* stringOrNull */)>("setStringOrNull");
    method(_javaPart, stringOrNull.has_value() ? jni::make_jstring(stringOrNull.value()) : nullptr);
  }
  std::optional<std::string> JHybridTestObjectSwiftKotlinSpec::getOptionalString() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<jni::JString>()>("getOptionalString");
    auto result = method(_javaPart);
    return result != nullptr ? std::make_optional(result->toStdString()) : std::nullopt;
  }
  void JHybridTestObjectSwiftKotlinSpec::setOptionalString(const std::optional<std::string>& optionalString) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<jni::JString> /* optionalString */)>("setOptionalString");
    method(_javaPart, optionalString.has_value() ? jni::make_jstring(optionalString.value()) : nullptr);
  }
  std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec> JHybridTestObjectSwiftKotlinSpec::getThisObject() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JHybridTestObjectSwiftKotlinSpec::javaobject>()>("getThisObject");
    auto result = method(_javaPart);
    return JNISharedPtr::make_shared_from_jni<JHybridTestObjectSwiftKotlinSpec>(jni::make_global(result));
  }

  // Methods
  void JHybridTestObjectSwiftKotlinSpec::simpleFunc() {
    static const auto method = _javaPart->getClass()->getMethod<void()>("simpleFunc");
    method(_javaPart);
  }
  double JHybridTestObjectSwiftKotlinSpec::addNumbers(double a, double b) {
    static const auto method = _javaPart->getClass()->getMethod<double(double /* a */, double /* b */)>("addNumbers");
    auto result = method(_javaPart, a, b);
    return result;
  }
  std::string JHybridTestObjectSwiftKotlinSpec::addStrings(const std::string& a, const std::string& b) {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<jni::JString>(jni::alias_ref<jni::JString> /* a */, jni::alias_ref<jni::JString> /* b */)>("addStrings");
    auto result = method(_javaPart, jni::make_jstring(a), jni::make_jstring(b));
    return result->toStdString();
  }
  void JHybridTestObjectSwiftKotlinSpec::multipleArguments(double num, const std::string& str, bool boo) {
    static const auto method = _javaPart->getClass()->getMethod<void(double /* num */, jni::alias_ref<jni::JString> /* str */, jboolean /* boo */)>("multipleArguments");
    method(_javaPart, num, jni::make_jstring(str), boo);
  }
  std::shared_ptr<AnyMap> JHybridTestObjectSwiftKotlinSpec::createMap() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JAnyMap::javaobject>()>("createMap");
    auto result = method(_javaPart);
    return result->cthis()->getMap();
  }
  std::shared_ptr<AnyMap> JHybridTestObjectSwiftKotlinSpec::mapRoundtrip(const std::shared_ptr<AnyMap>& map) {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JAnyMap::javaobject>(jni::alias_ref<JAnyMap::javaobject> /* map */)>("mapRoundtrip");
    auto result = method(_javaPart, JAnyMap::create(map));
    return result->cthis()->getMap();
  }
  double JHybridTestObjectSwiftKotlinSpec::funcThatThrows() {
    static const auto method = _javaPart->getClass()->getMethod<double()>("funcThatThrows");
    auto result = method(_javaPart);
    return result;
  }
  std::string JHybridTestObjectSwiftKotlinSpec::tryOptionalParams(double num, bool boo, const std::optional<std::string>& str) {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<jni::JString>(double /* num */, jboolean /* boo */, jni::alias_ref<jni::JString> /* str */)>("tryOptionalParams");
    auto result = method(_javaPart, num, boo, str.has_value() ? jni::make_jstring(str.value()) : nullptr);
    return result->toStdString();
  }
  std::string JHybridTestObjectSwiftKotlinSpec::tryMiddleParam(double num, std::optional<bool> boo, const std::string& str) {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<jni::JString>(double /* num */, jni::alias_ref<jni::JBoolean> /* boo */, jni::alias_ref<jni::JString> /* str */)>("tryMiddleParam");
    auto result = method(_javaPart, num, boo.has_value() ? jni::JBoolean::valueOf(boo.value()) : nullptr, jni::make_jstring(str));
    return result->toStdString();
  }
  int64_t JHybridTestObjectSwiftKotlinSpec::calculateFibonacciSync(double value) {
    static const auto method = _javaPart->getClass()->getMethod<int64_t(double /* value */)>("calculateFibonacciSync");
    auto result = method(_javaPart, value);
    return result;
  }
  std::future<int64_t> JHybridTestObjectSwiftKotlinSpec::calculateFibonacciAsync(double value) {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JPromise::javaobject>(double /* value */)>("calculateFibonacciAsync");
    auto result = method(_javaPart, value);
    return [&]() {
      auto promise = std::make_shared<std::promise<int64_t>>();
      result->cthis()->addOnResolvedListener([=](const jni::alias_ref<jni::JObject>& boxedResult) {
        auto result = jni::static_ref_cast<jni::JLong>(boxedResult);
        promise->set_value(result->value());
      });
      result->cthis()->addOnRejectedListener([=](const jni::alias_ref<jni::JString>& message) {
        std::runtime_error error(message->toStdString());
        promise->set_exception(std::make_exception_ptr(error));
      });
      return promise->get_future();
    }();
  }
  std::future<void> JHybridTestObjectSwiftKotlinSpec::wait(double seconds) {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JPromise::javaobject>(double /* seconds */)>("wait");
    auto result = method(_javaPart, seconds);
    return [&]() {
      auto promise = std::make_shared<std::promise<void>>();
      result->cthis()->addOnResolvedListener([=](const jni::alias_ref<jni::JObject>& boxedResult) {
        promise->set_value();
      });
      result->cthis()->addOnRejectedListener([=](const jni::alias_ref<jni::JString>& message) {
        std::runtime_error error(message->toStdString());
        promise->set_exception(std::make_exception_ptr(error));
      });
      return promise->get_future();
    }();
  }
  void JHybridTestObjectSwiftKotlinSpec::callCallback(const std::function<void()>& callback) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void::javaobject> /* callback */)>("callCallback");
    method(_javaPart, JFunc_void::fromCpp(callback));
  }
  void JHybridTestObjectSwiftKotlinSpec::callAll(const std::function<void()>& first, const std::function<void()>& second, const std::function<void()>& third) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void::javaobject> /* first */, jni::alias_ref<JFunc_void::javaobject> /* second */, jni::alias_ref<JFunc_void::javaobject> /* third */)>("callAll");
    method(_javaPart, JFunc_void::fromCpp(first), JFunc_void::fromCpp(second), JFunc_void::fromCpp(third));
  }
  Car JHybridTestObjectSwiftKotlinSpec::getCar() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JCar>()>("getCar");
    auto result = method(_javaPart);
    return result->toCpp();
  }
  bool JHybridTestObjectSwiftKotlinSpec::isCarElectric(const Car& car) {
    static const auto method = _javaPart->getClass()->getMethod<jboolean(jni::alias_ref<JCar> /* car */)>("isCarElectric");
    auto result = method(_javaPart, JCar::fromCpp(car));
    return result;
  }
  std::optional<Person> JHybridTestObjectSwiftKotlinSpec::getDriver(const Car& car) {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JPerson>(jni::alias_ref<JCar> /* car */)>("getDriver");
    auto result = method(_javaPart, JCar::fromCpp(car));
    return result != nullptr ? std::make_optional(result->toCpp()) : std::nullopt;
  }
  std::shared_ptr<ArrayBuffer> JHybridTestObjectSwiftKotlinSpec::createArrayBuffer() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JArrayBuffer::javaobject>()>("createArrayBuffer");
    auto result = method(_javaPart);
    return result->cthis()->getArrayBuffer();
  }
  double JHybridTestObjectSwiftKotlinSpec::getBufferLastItem(const std::shared_ptr<ArrayBuffer>& buffer) {
    static const auto method = _javaPart->getClass()->getMethod<double(jni::alias_ref<JArrayBuffer::javaobject> /* buffer */)>("getBufferLastItem");
    auto result = method(_javaPart, JArrayBuffer::wrap(buffer));
    return result;
  }
  void JHybridTestObjectSwiftKotlinSpec::setAllValuesTo(const std::shared_ptr<ArrayBuffer>& buffer, double value) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JArrayBuffer::javaobject> /* buffer */, double /* value */)>("setAllValuesTo");
    method(_javaPart, JArrayBuffer::wrap(buffer), value);
  }
  std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec> JHybridTestObjectSwiftKotlinSpec::newTestObject() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JHybridTestObjectSwiftKotlinSpec::javaobject>()>("newTestObject");
    auto result = method(_javaPart);
    return JNISharedPtr::make_shared_from_jni<JHybridTestObjectSwiftKotlinSpec>(jni::make_global(result));
  }

} // namespace margelo::nitro::image
