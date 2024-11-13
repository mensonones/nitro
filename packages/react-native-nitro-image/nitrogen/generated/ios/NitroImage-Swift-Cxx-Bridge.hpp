///
/// NitroImage-Swift-Cxx-Bridge.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

// Forward declarations of C++ defined types
// Forward declaration of `ArrayBufferHolder` to properly resolve imports.
namespace NitroModules { class ArrayBufferHolder; }
// Forward declaration of `ArrayBuffer` to properly resolve imports.
namespace NitroModules { class ArrayBuffer; }
// Forward declaration of `HybridBaseSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridBaseSpec; }
// Forward declaration of `HybridChildSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridChildSpec; }
// Forward declaration of `HybridImageFactorySpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridImageFactorySpec; }
// Forward declaration of `HybridImageSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridImageSpec; }
// Forward declaration of `HybridTestObjectSwiftKotlinSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridTestObjectSwiftKotlinSpec; }
// Forward declaration of `Person` to properly resolve imports.
namespace margelo::nitro::image { struct Person; }
// Forward declaration of `Powertrain` to properly resolve imports.
namespace margelo::nitro::image { enum class Powertrain; }

// Forward declarations of Swift defined types
// Forward declaration of `HybridBaseSpecCxx` to properly resolve imports.
namespace NitroImage { class HybridBaseSpecCxx; }
// Forward declaration of `HybridChildSpecCxx` to properly resolve imports.
namespace NitroImage { class HybridChildSpecCxx; }
// Forward declaration of `HybridImageFactorySpecCxx` to properly resolve imports.
namespace NitroImage { class HybridImageFactorySpecCxx; }
// Forward declaration of `HybridImageSpecCxx` to properly resolve imports.
namespace NitroImage { class HybridImageSpecCxx; }
// Forward declaration of `HybridTestObjectSwiftKotlinSpecCxx` to properly resolve imports.
namespace NitroImage { class HybridTestObjectSwiftKotlinSpecCxx; }

// Include C++ defined types
#include "HybridBaseSpec.hpp"
#include "HybridChildSpec.hpp"
#include "HybridImageFactorySpec.hpp"
#include "HybridImageSpec.hpp"
#include "HybridTestObjectSwiftKotlinSpec.hpp"
#include "Person.hpp"
#include "Powertrain.hpp"
#include <NitroModules/ArrayBuffer.hpp>
#include <NitroModules/ArrayBufferHolder.hpp>
#include <NitroModules/PromiseHolder.hpp>
#include <functional>
#include <future>
#include <memory>
#include <optional>
#include <string>
#include <variant>
#include <vector>

/**
 * Contains specialized versions of C++ templated types so they can be accessed from Swift,
 * as well as helper functions to interact with those C++ types from Swift.
 */
namespace margelo::nitro::image::bridge::swift {

  // pragma MARK: std::function<void(const std::string& /* path */)>
  /**
   * Specialized version of `std::function<void(const std::string&)>`.
   */
  using Func_void_std__string = std::function<void(const std::string& /* path */)>;
  /**
   * Wrapper class for a `std::function<void(const std::string& / * path * /)>`, this can be used from Swift.
   */
  class Func_void_std__string_Wrapper final {
  public:
    explicit Func_void_std__string_Wrapper(const std::function<void(const std::string& /* path */)>& func): _function(func) {}
    explicit Func_void_std__string_Wrapper(std::function<void(const std::string& /* path */)>&& func): _function(std::move(func)) {}
    inline void call(std::string path) const {
      _function(path);
    }
  private:
    std::function<void(const std::string& /* path */)> _function;
  };
  inline Func_void_std__string create_Func_void_std__string(void* _Nonnull closureHolder, void(* _Nonnull call)(void* _Nonnull /* closureHolder */, std::string), void(* _Nonnull destroy)(void* _Nonnull)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_std__string([sharedClosureHolder, call](const std::string& path) -> void {
      call(sharedClosureHolder.get(), path);
    });
  }
  inline std::shared_ptr<Func_void_std__string_Wrapper> share_Func_void_std__string(const Func_void_std__string& value) {
    return std::make_shared<Func_void_std__string_Wrapper>(value);
  }
  
  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridImageSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::image::HybridImageSpec>`.
   */
  using std__shared_ptr_margelo__nitro__image__HybridImageSpec_ = std::shared_ptr<margelo::nitro::image::HybridImageSpec>;
  std::shared_ptr<margelo::nitro::image::HybridImageSpec> create_std__shared_ptr_margelo__nitro__image__HybridImageSpec_(void* _Nonnull swiftUnsafePointer);
  void* _Nonnull get_std__shared_ptr_margelo__nitro__image__HybridImageSpec_(std__shared_ptr_margelo__nitro__image__HybridImageSpec_ cppType);
  
  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridImageFactorySpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::image::HybridImageFactorySpec>`.
   */
  using std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_ = std::shared_ptr<margelo::nitro::image::HybridImageFactorySpec>;
  std::shared_ptr<margelo::nitro::image::HybridImageFactorySpec> create_std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_(void* _Nonnull swiftUnsafePointer);
  void* _Nonnull get_std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_(std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_ cppType);
  
  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>`.
   */
  using std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_ = std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>;
  std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec> create_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_(void* _Nonnull swiftUnsafePointer);
  void* _Nonnull get_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_(std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_ cppType);
  
  // pragma MARK: std::optional<std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>>
  /**
   * Specialized version of `std::optional<std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>>`.
   */
  using std__optional_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec__ = std::optional<std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>>;
  inline std::optional<std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>> create_std__optional_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec__(const std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>& value) {
    return std::optional<std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>>(value);
  }
  
  // pragma MARK: std::optional<std::string>
  /**
   * Specialized version of `std::optional<std::string>`.
   */
  using std__optional_std__string_ = std::optional<std::string>;
  inline std::optional<std::string> create_std__optional_std__string_(const std::string& value) {
    return std::optional<std::string>(value);
  }
  
  // pragma MARK: std::vector<std::string>
  /**
   * Specialized version of `std::vector<std::string>`.
   */
  using std__vector_std__string_ = std::vector<std::string>;
  inline std::vector<std::string> create_std__vector_std__string_(size_t size) {
    std::vector<std::string> vector;
    vector.reserve(size);
    return vector;
  }
  
  // pragma MARK: std::optional<std::vector<std::string>>
  /**
   * Specialized version of `std::optional<std::vector<std::string>>`.
   */
  using std__optional_std__vector_std__string__ = std::optional<std::vector<std::string>>;
  inline std::optional<std::vector<std::string>> create_std__optional_std__vector_std__string__(const std::vector<std::string>& value) {
    return std::optional<std::vector<std::string>>(value);
  }
  
  // pragma MARK: std::optional<Powertrain>
  /**
   * Specialized version of `std::optional<Powertrain>`.
   */
  using std__optional_Powertrain_ = std::optional<Powertrain>;
  inline std::optional<Powertrain> create_std__optional_Powertrain_(const Powertrain& value) {
    return std::optional<Powertrain>(value);
  }
  
  // pragma MARK: std::vector<double>
  /**
   * Specialized version of `std::vector<double>`.
   */
  using std__vector_double_ = std::vector<double>;
  inline std::vector<double> create_std__vector_double_(size_t size) {
    std::vector<double> vector;
    vector.reserve(size);
    return vector;
  }
  
  // pragma MARK: std::vector<Person>
  /**
   * Specialized version of `std::vector<Person>`.
   */
  using std__vector_Person_ = std::vector<Person>;
  inline std::vector<Person> create_std__vector_Person_(size_t size) {
    std::vector<Person> vector;
    vector.reserve(size);
    return vector;
  }
  
  // pragma MARK: std::vector<Powertrain>
  /**
   * Specialized version of `std::vector<Powertrain>`.
   */
  using std__vector_Powertrain_ = std::vector<Powertrain>;
  inline std::vector<Powertrain> create_std__vector_Powertrain_(size_t size) {
    std::vector<Powertrain> vector;
    vector.reserve(size);
    return vector;
  }
  
  // pragma MARK: std::function<void(const std::vector<Powertrain>& /* array */)>
  /**
   * Specialized version of `std::function<void(const std::vector<Powertrain>&)>`.
   */
  using Func_void_std__vector_Powertrain_ = std::function<void(const std::vector<Powertrain>& /* array */)>;
  /**
   * Wrapper class for a `std::function<void(const std::vector<Powertrain>& / * array * /)>`, this can be used from Swift.
   */
  class Func_void_std__vector_Powertrain__Wrapper final {
  public:
    explicit Func_void_std__vector_Powertrain__Wrapper(const std::function<void(const std::vector<Powertrain>& /* array */)>& func): _function(func) {}
    explicit Func_void_std__vector_Powertrain__Wrapper(std::function<void(const std::vector<Powertrain>& /* array */)>&& func): _function(std::move(func)) {}
    inline void call(std::vector<Powertrain> array) const {
      _function(array);
    }
  private:
    std::function<void(const std::vector<Powertrain>& /* array */)> _function;
  };
  inline Func_void_std__vector_Powertrain_ create_Func_void_std__vector_Powertrain_(void* _Nonnull closureHolder, void(* _Nonnull call)(void* _Nonnull /* closureHolder */, std::vector<Powertrain>), void(* _Nonnull destroy)(void* _Nonnull)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_std__vector_Powertrain_([sharedClosureHolder, call](const std::vector<Powertrain>& array) -> void {
      call(sharedClosureHolder.get(), array);
    });
  }
  inline std::shared_ptr<Func_void_std__vector_Powertrain__Wrapper> share_Func_void_std__vector_Powertrain_(const Func_void_std__vector_Powertrain_& value) {
    return std::make_shared<Func_void_std__vector_Powertrain__Wrapper>(value);
  }
  
  // pragma MARK: std::optional<bool>
  /**
   * Specialized version of `std::optional<bool>`.
   */
  using std__optional_bool_ = std::optional<bool>;
  inline std::optional<bool> create_std__optional_bool_(const bool& value) {
    return std::optional<bool>(value);
  }
  
  // pragma MARK: std::variant<std::string, double>
  /**
   * Wrapper struct for `std::variant<std::string, double>`.
   * std::variant cannot be used in Swift because of a Swift bug.
   * Not even specializing it works. So we create a wrapper struct.
   */
  struct std__variant_std__string__double_ {
    std::variant<std::string, double> variant;
    std__variant_std__string__double_(std::variant<std::string, double> variant): variant(variant) { }
    operator std::variant<std::string, double>() const {
      return variant;
    }
    inline size_t index() const {
      return variant.index();
    }
  };
  inline std__variant_std__string__double_ create_std__variant_std__string__double_(const std::string& value) {
    return std__variant_std__string__double_(value);
  }
  inline std__variant_std__string__double_ create_std__variant_std__string__double_(double value) {
    return std__variant_std__string__double_(value);
  }
  inline std::string get_std__variant_std__string__double__0(const std__variant_std__string__double_& variantWrapper) {
    return std::get<0>(variantWrapper.variant);
  }
  inline double get_std__variant_std__string__double__1(const std__variant_std__string__double_& variantWrapper) {
    return std::get<1>(variantWrapper.variant);
  }
  
  // pragma MARK: PromiseHolder<int64_t>
  /**
   * Specialized version of `PromiseHolder<int64_t>`.
   */
  using PromiseHolder_int64_t_ = PromiseHolder<int64_t>;
  inline PromiseHolder<int64_t> create_PromiseHolder_int64_t_() {
    return PromiseHolder<int64_t>();
  }
  
  // pragma MARK: PromiseHolder<void>
  /**
   * Specialized version of `PromiseHolder<void>`.
   */
  using PromiseHolder_void_ = PromiseHolder<void>;
  inline PromiseHolder<void> create_PromiseHolder_void_() {
    return PromiseHolder<void>();
  }
  
  // pragma MARK: std::function<void()>
  /**
   * Specialized version of `std::function<void()>`.
   */
  using Func_void = std::function<void()>;
  /**
   * Wrapper class for a `std::function<void()>`, this can be used from Swift.
   */
  class Func_void_Wrapper final {
  public:
    explicit Func_void_Wrapper(const std::function<void()>& func): _function(func) {}
    explicit Func_void_Wrapper(std::function<void()>&& func): _function(std::move(func)) {}
    inline void call() const {
      _function();
    }
  private:
    std::function<void()> _function;
  };
  inline Func_void create_Func_void(void* _Nonnull closureHolder, void(* _Nonnull call)(void* _Nonnull /* closureHolder */), void(* _Nonnull destroy)(void* _Nonnull)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void([sharedClosureHolder, call]() -> void {
      call(sharedClosureHolder.get());
    });
  }
  inline std::shared_ptr<Func_void_Wrapper> share_Func_void(const Func_void& value) {
    return std::make_shared<Func_void_Wrapper>(value);
  }
  
  // pragma MARK: std::optional<double>
  /**
   * Specialized version of `std::optional<double>`.
   */
  using std__optional_double_ = std::optional<double>;
  inline std::optional<double> create_std__optional_double_(const double& value) {
    return std::optional<double>(value);
  }
  
  // pragma MARK: std::function<void(std::optional<double> /* maybe */)>
  /**
   * Specialized version of `std::function<void(std::optional<double>)>`.
   */
  using Func_void_std__optional_double_ = std::function<void(std::optional<double> /* maybe */)>;
  /**
   * Wrapper class for a `std::function<void(std::optional<double> / * maybe * /)>`, this can be used from Swift.
   */
  class Func_void_std__optional_double__Wrapper final {
  public:
    explicit Func_void_std__optional_double__Wrapper(const std::function<void(std::optional<double> /* maybe */)>& func): _function(func) {}
    explicit Func_void_std__optional_double__Wrapper(std::function<void(std::optional<double> /* maybe */)>&& func): _function(std::move(func)) {}
    inline void call(std::optional<double> maybe) const {
      _function(maybe);
    }
  private:
    std::function<void(std::optional<double> /* maybe */)> _function;
  };
  inline Func_void_std__optional_double_ create_Func_void_std__optional_double_(void* _Nonnull closureHolder, void(* _Nonnull call)(void* _Nonnull /* closureHolder */, std::optional<double>), void(* _Nonnull destroy)(void* _Nonnull)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_std__optional_double_([sharedClosureHolder, call](std::optional<double> maybe) -> void {
      call(sharedClosureHolder.get(), maybe);
    });
  }
  inline std::shared_ptr<Func_void_std__optional_double__Wrapper> share_Func_void_std__optional_double_(const Func_void_std__optional_double_& value) {
    return std::make_shared<Func_void_std__optional_double__Wrapper>(value);
  }
  
  // pragma MARK: std::optional<Person>
  /**
   * Specialized version of `std::optional<Person>`.
   */
  using std__optional_Person_ = std::optional<Person>;
  inline std::optional<Person> create_std__optional_Person_(const Person& value) {
    return std::optional<Person>(value);
  }
  
  // pragma MARK: PromiseHolder<std::shared_ptr<ArrayBuffer>>
  /**
   * Specialized version of `PromiseHolder<std::shared_ptr<ArrayBuffer>>`.
   */
  using PromiseHolder_std__shared_ptr_ArrayBuffer__ = PromiseHolder<std::shared_ptr<ArrayBuffer>>;
  inline PromiseHolder<std::shared_ptr<ArrayBuffer>> create_PromiseHolder_std__shared_ptr_ArrayBuffer__() {
    return PromiseHolder<std::shared_ptr<ArrayBuffer>>();
  }
  
  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridChildSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::image::HybridChildSpec>`.
   */
  using std__shared_ptr_margelo__nitro__image__HybridChildSpec_ = std::shared_ptr<margelo::nitro::image::HybridChildSpec>;
  std::shared_ptr<margelo::nitro::image::HybridChildSpec> create_std__shared_ptr_margelo__nitro__image__HybridChildSpec_(void* _Nonnull swiftUnsafePointer);
  void* _Nonnull get_std__shared_ptr_margelo__nitro__image__HybridChildSpec_(std__shared_ptr_margelo__nitro__image__HybridChildSpec_ cppType);
  
  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridBaseSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::image::HybridBaseSpec>`.
   */
  using std__shared_ptr_margelo__nitro__image__HybridBaseSpec_ = std::shared_ptr<margelo::nitro::image::HybridBaseSpec>;
  std::shared_ptr<margelo::nitro::image::HybridBaseSpec> create_std__shared_ptr_margelo__nitro__image__HybridBaseSpec_(void* _Nonnull swiftUnsafePointer);
  void* _Nonnull get_std__shared_ptr_margelo__nitro__image__HybridBaseSpec_(std__shared_ptr_margelo__nitro__image__HybridBaseSpec_ cppType);

} // namespace margelo::nitro::image::bridge::swift
