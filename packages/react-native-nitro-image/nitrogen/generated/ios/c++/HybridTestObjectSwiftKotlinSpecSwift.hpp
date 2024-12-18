///
/// HybridTestObjectSwiftKotlinSpecSwift.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridTestObjectSwiftKotlinSpec.hpp"

// Forward declaration of `HybridTestObjectSwiftKotlinSpec_cxx` to properly resolve imports.
namespace NitroImage { class HybridTestObjectSwiftKotlinSpec_cxx; }

// Forward declaration of `HybridTestObjectSwiftKotlinSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridTestObjectSwiftKotlinSpec; }
// Forward declaration of `Powertrain` to properly resolve imports.
namespace margelo::nitro::image { enum class Powertrain; }
// Forward declaration of `OldEnum` to properly resolve imports.
namespace margelo::nitro::image { enum class OldEnum; }
// Forward declaration of `Person` to properly resolve imports.
namespace margelo::nitro::image { struct Person; }
// Forward declaration of `AnyMap` to properly resolve imports.
namespace NitroModules { class AnyMap; }
// Forward declaration of `Car` to properly resolve imports.
namespace margelo::nitro::image { struct Car; }
// Forward declaration of `ArrayBuffer` to properly resolve imports.
namespace NitroModules { class ArrayBuffer; }
// Forward declaration of `ArrayBufferHolder` to properly resolve imports.
namespace NitroModules { class ArrayBufferHolder; }
// Forward declaration of `HybridChildSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridChildSpec; }
// Forward declaration of `HybridBaseSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridBaseSpec; }

#include <memory>
#include "HybridTestObjectSwiftKotlinSpec.hpp"
#include <optional>
#include <string>
#include <vector>
#include "Powertrain.hpp"
#include "OldEnum.hpp"
#include <variant>
#include "Person.hpp"
#include <functional>
#include <NitroModules/AnyMap.hpp>
#include <exception>
#include <NitroModules/Promise.hpp>
#include "Car.hpp"
#include <NitroModules/ArrayBuffer.hpp>
#include <NitroModules/ArrayBufferHolder.hpp>
#include "HybridChildSpec.hpp"
#include "HybridBaseSpec.hpp"

#include "NitroImage-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::image {

  /**
   * The C++ part of HybridTestObjectSwiftKotlinSpec_cxx.swift.
   *
   * HybridTestObjectSwiftKotlinSpecSwift (C++) accesses HybridTestObjectSwiftKotlinSpec_cxx (Swift), and might
   * contain some additional bridging code for C++ <> Swift interop.
   *
   * Since this obviously introduces an overhead, I hope at some point in
   * the future, HybridTestObjectSwiftKotlinSpec_cxx can directly inherit from the C++ class HybridTestObjectSwiftKotlinSpec
   * to simplify the whole structure and memory management.
   */
  class HybridTestObjectSwiftKotlinSpecSwift: public virtual HybridTestObjectSwiftKotlinSpec {
  public:
    // Constructor from a Swift instance
    explicit HybridTestObjectSwiftKotlinSpecSwift(const NitroImage::HybridTestObjectSwiftKotlinSpec_cxx& swiftPart):
      HybridObject(HybridTestObjectSwiftKotlinSpec::TAG),
      _swiftPart(swiftPart) { }

  public:
    // Get the Swift part
    inline NitroImage::HybridTestObjectSwiftKotlinSpec_cxx getSwiftPart() noexcept { return _swiftPart; }

  public:
    // Get memory pressure
    inline size_t getExternalMemorySize() noexcept override {
      return _swiftPart.getMemorySize();
    }

  public:
    // Properties
    inline std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec> getThisObject() noexcept override {
      auto __result = _swiftPart.getThisObject();
      return __result;
    }
    inline std::optional<std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>> getOptionalHybrid() noexcept override {
      auto __result = _swiftPart.getOptionalHybrid();
      return __result;
    }
    inline void setOptionalHybrid(const std::optional<std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>>& optionalHybrid) noexcept override {
      _swiftPart.setOptionalHybrid(optionalHybrid);
    }
    inline double getNumberValue() noexcept override {
      return _swiftPart.getNumberValue();
    }
    inline void setNumberValue(double numberValue) noexcept override {
      _swiftPart.setNumberValue(std::forward<decltype(numberValue)>(numberValue));
    }
    inline bool getBoolValue() noexcept override {
      return _swiftPart.getBoolValue();
    }
    inline void setBoolValue(bool boolValue) noexcept override {
      _swiftPart.setBoolValue(std::forward<decltype(boolValue)>(boolValue));
    }
    inline std::string getStringValue() noexcept override {
      auto __result = _swiftPart.getStringValue();
      return __result;
    }
    inline void setStringValue(const std::string& stringValue) noexcept override {
      _swiftPart.setStringValue(stringValue);
    }
    inline int64_t getBigintValue() noexcept override {
      return _swiftPart.getBigintValue();
    }
    inline void setBigintValue(int64_t bigintValue) noexcept override {
      _swiftPart.setBigintValue(std::forward<decltype(bigintValue)>(bigintValue));
    }
    inline std::optional<std::string> getStringOrUndefined() noexcept override {
      auto __result = _swiftPart.getStringOrUndefined();
      return __result;
    }
    inline void setStringOrUndefined(const std::optional<std::string>& stringOrUndefined) noexcept override {
      _swiftPart.setStringOrUndefined(stringOrUndefined);
    }
    inline std::optional<std::string> getStringOrNull() noexcept override {
      auto __result = _swiftPart.getStringOrNull();
      return __result;
    }
    inline void setStringOrNull(const std::optional<std::string>& stringOrNull) noexcept override {
      _swiftPart.setStringOrNull(stringOrNull);
    }
    inline std::optional<std::string> getOptionalString() noexcept override {
      auto __result = _swiftPart.getOptionalString();
      return __result;
    }
    inline void setOptionalString(const std::optional<std::string>& optionalString) noexcept override {
      _swiftPart.setOptionalString(optionalString);
    }
    inline std::optional<std::vector<std::string>> getOptionalArray() noexcept override {
      auto __result = _swiftPart.getOptionalArray();
      return __result;
    }
    inline void setOptionalArray(const std::optional<std::vector<std::string>>& optionalArray) noexcept override {
      _swiftPart.setOptionalArray(optionalArray);
    }
    inline std::optional<Powertrain> getOptionalEnum() noexcept override {
      auto __result = _swiftPart.getOptionalEnum();
      return __result;
    }
    inline void setOptionalEnum(std::optional<Powertrain> optionalEnum) noexcept override {
      _swiftPart.setOptionalEnum(optionalEnum);
    }
    inline std::optional<OldEnum> getOptionalOldEnum() noexcept override {
      auto __result = _swiftPart.getOptionalOldEnum();
      return __result;
    }
    inline void setOptionalOldEnum(std::optional<OldEnum> optionalOldEnum) noexcept override {
      _swiftPart.setOptionalOldEnum(optionalOldEnum);
    }
    inline std::variant<std::string, double> getSomeVariant() noexcept override {
      auto __result = _swiftPart.getSomeVariant();
      return __result;
    }
    inline void setSomeVariant(const std::variant<std::string, double>& someVariant) noexcept override {
      _swiftPart.setSomeVariant(someVariant);
    }

  public:
    // Methods
    inline std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec> newTestObject() override {
      auto __result = _swiftPart.newTestObject();
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline void simpleFunc() override {
      auto __result = _swiftPart.simpleFunc();
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
    }
    inline double addNumbers(double a, double b) override {
      auto __result = _swiftPart.addNumbers(std::forward<decltype(a)>(a), std::forward<decltype(b)>(b));
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::string addStrings(const std::string& a, const std::string& b) override {
      auto __result = _swiftPart.addStrings(a, b);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline void multipleArguments(double num, const std::string& str, bool boo) override {
      auto __result = _swiftPart.multipleArguments(std::forward<decltype(num)>(num), str, std::forward<decltype(boo)>(boo));
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
    }
    inline std::vector<std::string> bounceStrings(const std::vector<std::string>& array) override {
      auto __result = _swiftPart.bounceStrings(array);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::vector<double> bounceNumbers(const std::vector<double>& array) override {
      auto __result = _swiftPart.bounceNumbers(array);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::vector<Person> bounceStructs(const std::vector<Person>& array) override {
      auto __result = _swiftPart.bounceStructs(array);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::vector<Powertrain> bounceEnums(const std::vector<Powertrain>& array) override {
      auto __result = _swiftPart.bounceEnums(array);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline void complexEnumCallback(const std::vector<Powertrain>& array, const std::function<void(const std::vector<Powertrain>& /* array */)>& callback) override {
      auto __result = _swiftPart.complexEnumCallback(array, callback);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
    }
    inline std::shared_ptr<AnyMap> createMap() override {
      auto __result = _swiftPart.createMap();
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::shared_ptr<AnyMap> mapRoundtrip(const std::shared_ptr<AnyMap>& map) override {
      auto __result = _swiftPart.mapRoundtrip(map);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline double funcThatThrows() override {
      auto __result = _swiftPart.funcThatThrows();
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline void throwError(const std::exception_ptr& error) override {
      auto __result = _swiftPart.throwError(error);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
    }
    inline std::string tryOptionalParams(double num, bool boo, const std::optional<std::string>& str) override {
      auto __result = _swiftPart.tryOptionalParams(std::forward<decltype(num)>(num), std::forward<decltype(boo)>(boo), str);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::string tryMiddleParam(double num, std::optional<bool> boo, const std::string& str) override {
      auto __result = _swiftPart.tryMiddleParam(std::forward<decltype(num)>(num), boo, str);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::optional<Powertrain> tryOptionalEnum(std::optional<Powertrain> value) override {
      auto __result = _swiftPart.tryOptionalEnum(value);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline int64_t calculateFibonacciSync(double value) override {
      auto __result = _swiftPart.calculateFibonacciSync(std::forward<decltype(value)>(value));
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::shared_ptr<Promise<int64_t>> calculateFibonacciAsync(double value) override {
      auto __result = _swiftPart.calculateFibonacciAsync(std::forward<decltype(value)>(value));
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::shared_ptr<Promise<void>> wait(double seconds) override {
      auto __result = _swiftPart.wait(std::forward<decltype(seconds)>(seconds));
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::shared_ptr<Promise<void>> promiseThrows() override {
      auto __result = _swiftPart.promiseThrows();
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::shared_ptr<Promise<double>> awaitAndGetPromise(const std::shared_ptr<Promise<double>>& promise) override {
      auto __result = _swiftPart.awaitAndGetPromise(promise);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::shared_ptr<Promise<Car>> awaitAndGetComplexPromise(const std::shared_ptr<Promise<Car>>& promise) override {
      auto __result = _swiftPart.awaitAndGetComplexPromise(promise);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::shared_ptr<Promise<void>> awaitPromise(const std::shared_ptr<Promise<void>>& promise) override {
      auto __result = _swiftPart.awaitPromise(promise);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline void callCallback(const std::function<void()>& callback) override {
      auto __result = _swiftPart.callCallback(callback);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
    }
    inline void callAll(const std::function<void()>& first, const std::function<void()>& second, const std::function<void()>& third) override {
      auto __result = _swiftPart.callAll(first, second, third);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
    }
    inline void callWithOptional(std::optional<double> value, const std::function<void(std::optional<double> /* maybe */)>& callback) override {
      auto __result = _swiftPart.callWithOptional(value, callback);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
    }
    inline std::shared_ptr<Promise<double>> getValueFromJSCallbackAndWait(const std::function<std::shared_ptr<Promise<double>>()>& getValue) override {
      auto __result = _swiftPart.getValueFromJSCallbackAndWait(getValue);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::shared_ptr<Promise<void>> getValueFromJsCallback(const std::function<std::shared_ptr<Promise<std::string>>()>& callback, const std::function<void(const std::string& /* valueFromJs */)>& andThenCall) override {
      auto __result = _swiftPart.getValueFromJsCallback(callback, andThenCall);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline Car getCar() override {
      auto __result = _swiftPart.getCar();
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline bool isCarElectric(const Car& car) override {
      auto __result = _swiftPart.isCarElectric(car);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::optional<Person> getDriver(const Car& car) override {
      auto __result = _swiftPart.getDriver(car);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::shared_ptr<ArrayBuffer> createArrayBuffer() override {
      auto __result = _swiftPart.createArrayBuffer();
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline double getBufferLastItem(const std::shared_ptr<ArrayBuffer>& buffer) override {
      auto __result = _swiftPart.getBufferLastItem(ArrayBufferHolder(buffer));
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline void setAllValuesTo(const std::shared_ptr<ArrayBuffer>& buffer, double value) override {
      auto __result = _swiftPart.setAllValuesTo(ArrayBufferHolder(buffer), std::forward<decltype(value)>(value));
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
    }
    inline std::shared_ptr<Promise<std::shared_ptr<ArrayBuffer>>> createArrayBufferAsync() override {
      auto __result = _swiftPart.createArrayBufferAsync();
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::shared_ptr<margelo::nitro::image::HybridChildSpec> createChild() override {
      auto __result = _swiftPart.createChild();
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::shared_ptr<margelo::nitro::image::HybridBaseSpec> createBase() override {
      auto __result = _swiftPart.createBase();
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::shared_ptr<margelo::nitro::image::HybridBaseSpec> createBaseActualChild() override {
      auto __result = _swiftPart.createBaseActualChild();
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::shared_ptr<margelo::nitro::image::HybridChildSpec> bounceChild(const std::shared_ptr<margelo::nitro::image::HybridChildSpec>& child) override {
      auto __result = _swiftPart.bounceChild(child);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::shared_ptr<margelo::nitro::image::HybridBaseSpec> bounceBase(const std::shared_ptr<margelo::nitro::image::HybridBaseSpec>& base) override {
      auto __result = _swiftPart.bounceBase(base);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::shared_ptr<margelo::nitro::image::HybridBaseSpec> bounceChildBase(const std::shared_ptr<margelo::nitro::image::HybridChildSpec>& child) override {
      auto __result = _swiftPart.bounceChildBase(child);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline std::shared_ptr<margelo::nitro::image::HybridChildSpec> castBase(const std::shared_ptr<margelo::nitro::image::HybridBaseSpec>& base) override {
      auto __result = _swiftPart.castBase(base);
      if (!__result.hasValue()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }

  private:
    NitroImage::HybridTestObjectSwiftKotlinSpec_cxx _swiftPart;
  };

} // namespace margelo::nitro::image
