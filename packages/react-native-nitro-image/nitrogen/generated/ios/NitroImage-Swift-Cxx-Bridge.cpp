///
/// NitroImage-Swift-Cxx-Bridge.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "NitroImage-Swift-Cxx-Bridge.hpp"
#include "NitroImage-Swift-Cxx-Umbrella.hpp"

#include "HybridBaseSpecSwift.hpp"
#include "HybridChildSpecSwift.hpp"
#include "HybridImageFactorySpecSwift.hpp"
#include "HybridImageSpecSwift.hpp"
#include "HybridTestObjectSwiftKotlinSpecSwift.hpp"

namespace margelo::nitro::image::bridge::swift {

  // pragma MARK: std::function<void(const std::string& /* path */)>
  Func_void_std__string_Wrapper::Func_void_std__string_Wrapper(const std::function<void(const std::string& /* path */)>& func): function(func) {}
  Func_void_std__string_Wrapper::Func_void_std__string_Wrapper(std::function<void(const std::string& /* path */)>&& func): function(std::move(func)) {}
  void Func_void_std__string_Wrapper::call(std::string path) const {
    function(path);
  }
  Func_void_std__string create_Func_void_std__string(void* NONNULL closureHolder, void(* NONNULL call)(void* NONNULL /* closureHolder */, std::string), void(* NONNULL destroy)(void* NONNULL)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_std__string([sharedClosureHolder, call](const std::string& path) -> void {
      call(sharedClosureHolder.get(), path);
    });
  }
  std::shared_ptr<Func_void_std__string_Wrapper> share_Func_void_std__string(const Func_void_std__string& value) {
    return std::make_shared<Func_void_std__string_Wrapper>(value);
  }

  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridImageSpec>
  std::shared_ptr<margelo::nitro::image::HybridImageSpec> create_std__shared_ptr_margelo__nitro__image__HybridImageSpec_(size_t swiftReferenceId) {
    NitroImage::HybridImageSpecCxx swiftPart = NitroImage::HybridImageSpecCxx::getHybridImageSpecCxxById(swiftReferenceId);
    return HybridContext::getOrCreate<margelo::nitro::image::HybridImageSpecSwift>(swiftPart);
  }
  size_t get_std__shared_ptr_margelo__nitro__image__HybridImageSpec_(std__shared_ptr_margelo__nitro__image__HybridImageSpec_ cppType) {
    std::shared_ptr<margelo::nitro::image::HybridImageSpecSwift> swiftWrapper = std::dynamic_pointer_cast<margelo::nitro::image::HybridImageSpecSwift>(cppType);
  #ifdef NITRO_DEBUG
    if (swiftWrapper == nullptr) [[unlikely]] {
      throw std::runtime_error("Class \"std__shared_ptr_margelo__nitro__image__HybridImageSpec_\" is not implemented in Swift!");
    }
  #endif
    NitroImage::HybridImageSpecCxx swiftPart = swiftWrapper->getSwiftPart();
    return NitroImage::HybridImageSpecCxx::putHybridImageSpecCxx(swiftPart);
  }

  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridImageFactorySpec>
  std::shared_ptr<margelo::nitro::image::HybridImageFactorySpec> create_std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_(size_t swiftReferenceId) {
    NitroImage::HybridImageFactorySpecCxx swiftPart = NitroImage::HybridImageFactorySpecCxx::getHybridImageFactorySpecCxxById(swiftReferenceId);
    return HybridContext::getOrCreate<margelo::nitro::image::HybridImageFactorySpecSwift>(swiftPart);
  }
  size_t get_std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_(std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_ cppType) {
    std::shared_ptr<margelo::nitro::image::HybridImageFactorySpecSwift> swiftWrapper = std::dynamic_pointer_cast<margelo::nitro::image::HybridImageFactorySpecSwift>(cppType);
  #ifdef NITRO_DEBUG
    if (swiftWrapper == nullptr) [[unlikely]] {
      throw std::runtime_error("Class \"std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_\" is not implemented in Swift!");
    }
  #endif
    NitroImage::HybridImageFactorySpecCxx swiftPart = swiftWrapper->getSwiftPart();
    return NitroImage::HybridImageFactorySpecCxx::putHybridImageFactorySpecCxx(swiftPart);
  }

  // pragma MARK: std::variant<std::string, double>
  std__variant_std__string__double_::std__variant_std__string__double_(std::variant<std::string, double> variant): variant(variant) { }
  std__variant_std__string__double_::operator std::variant<std::string, double>() const {
    return variant;
  }
  size_t std__variant_std__string__double_::index() const {
    return variant.index();
  }
  std__variant_std__string__double_ create_std__variant_std__string__double_(const std::string& value) {
    return std__variant_std__string__double_(value);
  }
  std__variant_std__string__double_ create_std__variant_std__string__double_(double value) {
    return std__variant_std__string__double_(value);
  }
  std::string get_std__variant_std__string__double__0(const std__variant_std__string__double_& variantWrapper) {
    return std::get<0>(variantWrapper.variant);
  }
  double get_std__variant_std__string__double__1(const std__variant_std__string__double_& variantWrapper) {
    return std::get<1>(variantWrapper.variant);
  }

  // pragma MARK: std::vector<double>
  std::vector<double> create_std__vector_double_(size_t size) {
    std::vector<double> vector;
    vector.reserve(size);
    return vector;
  }

  // pragma MARK: std::vector<std::string>
  std::vector<std::string> create_std__vector_std__string_(size_t size) {
    std::vector<std::string> vector;
    vector.reserve(size);
    return vector;
  }

  // pragma MARK: std::variant<std::string, double, bool, std::vector<double>, std::vector<std::string>>
  std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__::std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__(std::variant<std::string, double, bool, std::vector<double>, std::vector<std::string>> variant): variant(variant) { }
  std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__::operator std::variant<std::string, double, bool, std::vector<double>, std::vector<std::string>>() const {
    return variant;
  }
  size_t std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__::index() const {
    return variant.index();
  }
  std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__ create_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__(const std::string& value) {
    return std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__(value);
  }
  std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__ create_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__(double value) {
    return std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__(value);
  }
  std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__ create_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__(bool value) {
    return std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__(value);
  }
  std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__ create_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__(const std::vector<double>& value) {
    return std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__(value);
  }
  std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__ create_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__(const std::vector<std::string>& value) {
    return std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__(value);
  }
  std::string get_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string___0(const std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__& variantWrapper) {
    return std::get<0>(variantWrapper.variant);
  }
  double get_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string___1(const std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__& variantWrapper) {
    return std::get<1>(variantWrapper.variant);
  }
  bool get_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string___2(const std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__& variantWrapper) {
    return std::get<2>(variantWrapper.variant);
  }
  std::vector<double> get_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string___3(const std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__& variantWrapper) {
    return std::get<3>(variantWrapper.variant);
  }
  std::vector<std::string> get_std__variant_std__string__double__bool__std__vector_double___std__vector_std__string___4(const std__variant_std__string__double__bool__std__vector_double___std__vector_std__string__& variantWrapper) {
    return std::get<4>(variantWrapper.variant);
  }

  // pragma MARK: std::variant<bool, OldEnum>
  std__variant_bool__OldEnum_::std__variant_bool__OldEnum_(std::variant<bool, OldEnum> variant): variant(variant) { }
  std__variant_bool__OldEnum_::operator std::variant<bool, OldEnum>() const {
    return variant;
  }
  size_t std__variant_bool__OldEnum_::index() const {
    return variant.index();
  }
  std__variant_bool__OldEnum_ create_std__variant_bool__OldEnum_(bool value) {
    return std__variant_bool__OldEnum_(value);
  }
  std__variant_bool__OldEnum_ create_std__variant_bool__OldEnum_(OldEnum value) {
    return std__variant_bool__OldEnum_(value);
  }
  bool get_std__variant_bool__OldEnum__0(const std__variant_bool__OldEnum_& variantWrapper) {
    return std::get<0>(variantWrapper.variant);
  }
  OldEnum get_std__variant_bool__OldEnum__1(const std__variant_bool__OldEnum_& variantWrapper) {
    return std::get<1>(variantWrapper.variant);
  }

  // pragma MARK: std::optional<Person>
  std::optional<Person> create_std__optional_Person_(const Person& value) {
    return std::optional<Person>(value);
  }

  // pragma MARK: std::variant<Car, Person>
  std__variant_Car__Person_::std__variant_Car__Person_(std::variant<Car, Person> variant): variant(variant) { }
  std__variant_Car__Person_::operator std::variant<Car, Person>() const {
    return variant;
  }
  size_t std__variant_Car__Person_::index() const {
    return variant.index();
  }
  std__variant_Car__Person_ create_std__variant_Car__Person_(const Car& value) {
    return std__variant_Car__Person_(value);
  }
  std__variant_Car__Person_ create_std__variant_Car__Person_(const Person& value) {
    return std__variant_Car__Person_(value);
  }
  Car get_std__variant_Car__Person__0(const std__variant_Car__Person_& variantWrapper) {
    return std::get<0>(variantWrapper.variant);
  }
  Person get_std__variant_Car__Person__1(const std__variant_Car__Person_& variantWrapper) {
    return std::get<1>(variantWrapper.variant);
  }

  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridTestObjectCppSpec>
  std::shared_ptr<margelo::nitro::image::HybridTestObjectCppSpec> create_std__shared_ptr_margelo__nitro__image__HybridTestObjectCppSpec_(size_t swiftReferenceId) {
    NitroImage::HybridTestObjectCppSpecCxx swiftPart = NitroImage::HybridTestObjectCppSpecCxx::getHybridTestObjectCppSpecCxxById(swiftReferenceId);
    return HybridContext::getOrCreate<margelo::nitro::image::HybridTestObjectCppSpecSwift>(swiftPart);
  }
  size_t get_std__shared_ptr_margelo__nitro__image__HybridTestObjectCppSpec_(std__shared_ptr_margelo__nitro__image__HybridTestObjectCppSpec_ cppType) {
    std::shared_ptr<margelo::nitro::image::HybridTestObjectCppSpecSwift> swiftWrapper = std::dynamic_pointer_cast<margelo::nitro::image::HybridTestObjectCppSpecSwift>(cppType);
  #ifdef NITRO_DEBUG
    if (swiftWrapper == nullptr) [[unlikely]] {
      throw std::runtime_error("Class \"std__shared_ptr_margelo__nitro__image__HybridTestObjectCppSpec_\" is not implemented in Swift!");
    }
  #endif
    NitroImage::HybridTestObjectCppSpecCxx swiftPart = swiftWrapper->getSwiftPart();
    return NitroImage::HybridTestObjectCppSpecCxx::putHybridTestObjectCppSpecCxx(swiftPart);
  }

  // pragma MARK: std::variant<Person, std::shared_ptr<margelo::nitro::image::HybridTestObjectCppSpec>>
  std__variant_Person__std__shared_ptr_margelo__nitro__image__HybridTestObjectCppSpec__::std__variant_Person__std__shared_ptr_margelo__nitro__image__HybridTestObjectCppSpec__(std::variant<Person, std::shared_ptr<margelo::nitro::image::HybridTestObjectCppSpec>> variant): variant(variant) { }
  std__variant_Person__std__shared_ptr_margelo__nitro__image__HybridTestObjectCppSpec__::operator std::variant<Person, std::shared_ptr<margelo::nitro::image::HybridTestObjectCppSpec>>() const {
    return variant;
  }
  size_t std__variant_Person__std__shared_ptr_margelo__nitro__image__HybridTestObjectCppSpec__::index() const {
    return variant.index();
  }
  std__variant_Person__std__shared_ptr_margelo__nitro__image__HybridTestObjectCppSpec__ create_std__variant_Person__std__shared_ptr_margelo__nitro__image__HybridTestObjectCppSpec__(const Person& value) {
    return std__variant_Person__std__shared_ptr_margelo__nitro__image__HybridTestObjectCppSpec__(value);
  }
  std__variant_Person__std__shared_ptr_margelo__nitro__image__HybridTestObjectCppSpec__ create_std__variant_Person__std__shared_ptr_margelo__nitro__image__HybridTestObjectCppSpec__(const std::shared_ptr<margelo::nitro::image::HybridTestObjectCppSpec>& value) {
    return std__variant_Person__std__shared_ptr_margelo__nitro__image__HybridTestObjectCppSpec__(value);
  }
  Person get_std__variant_Person__std__shared_ptr_margelo__nitro__image__HybridTestObjectCppSpec___0(const std__variant_Person__std__shared_ptr_margelo__nitro__image__HybridTestObjectCppSpec__& variantWrapper) {
    return std::get<0>(variantWrapper.variant);
  }
  std::shared_ptr<margelo::nitro::image::HybridTestObjectCppSpec> get_std__variant_Person__std__shared_ptr_margelo__nitro__image__HybridTestObjectCppSpec___1(const std__variant_Person__std__shared_ptr_margelo__nitro__image__HybridTestObjectCppSpec__& variantWrapper) {
    return std::get<1>(variantWrapper.variant);
  }

  // pragma MARK: std::tuple<double, double>
  std::tuple<double, double> create_std__tuple_double__double_(double arg0, double arg1) {
    return std::tuple<double, double> { arg0, arg1 };
  }

  // pragma MARK: std::tuple<double, double, double>
  std::tuple<double, double, double> create_std__tuple_double__double__double_(double arg0, double arg1, double arg2) {
    return std::tuple<double, double, double> { arg0, arg1, arg2 };
  }

  // pragma MARK: std::variant<std::tuple<double, double>, std::tuple<double, double, double>>
  std__variant_std__tuple_double__double___std__tuple_double__double__double__::std__variant_std__tuple_double__double___std__tuple_double__double__double__(std::variant<std::tuple<double, double>, std::tuple<double, double, double>> variant): variant(variant) { }
  std__variant_std__tuple_double__double___std__tuple_double__double__double__::operator std::variant<std::tuple<double, double>, std::tuple<double, double, double>>() const {
    return variant;
  }
  size_t std__variant_std__tuple_double__double___std__tuple_double__double__double__::index() const {
    return variant.index();
  }
  std__variant_std__tuple_double__double___std__tuple_double__double__double__ create_std__variant_std__tuple_double__double___std__tuple_double__double__double__(const std::tuple<double, double>& value) {
    return std__variant_std__tuple_double__double___std__tuple_double__double__double__(value);
  }
  std__variant_std__tuple_double__double___std__tuple_double__double__double__ create_std__variant_std__tuple_double__double___std__tuple_double__double__double__(const std::tuple<double, double, double>& value) {
    return std__variant_std__tuple_double__double___std__tuple_double__double__double__(value);
  }
  std::tuple<double, double> get_std__variant_std__tuple_double__double___std__tuple_double__double__double___0(const std__variant_std__tuple_double__double___std__tuple_double__double__double__& variantWrapper) {
    return std::get<0>(variantWrapper.variant);
  }
  std::tuple<double, double, double> get_std__variant_std__tuple_double__double___std__tuple_double__double__double___1(const std__variant_std__tuple_double__double___std__tuple_double__double__double__& variantWrapper) {
    return std::get<1>(variantWrapper.variant);
  }

  // pragma MARK: std::tuple<double, std::string>
  std::tuple<double, std::string> create_std__tuple_double__std__string_(double arg0, const std::string& arg1) {
    return std::tuple<double, std::string> { arg0, arg1 };
  }

  // pragma MARK: std::tuple<double, std::string, bool>
  std::tuple<double, std::string, bool> create_std__tuple_double__std__string__bool_(double arg0, const std::string& arg1, bool arg2) {
    return std::tuple<double, std::string, bool> { arg0, arg1, arg2 };
  }

  // pragma MARK: PromiseHolder<double>
  PromiseHolder<double> create_PromiseHolder_double_() {
    return PromiseHolder<double>();
  }

  // pragma MARK: std::function<std::future<double>()>
  Func_std__future_double__Wrapper::Func_std__future_double__Wrapper(const std::function<std::future<double>()>& func): function(func) {}
  Func_std__future_double__Wrapper::Func_std__future_double__Wrapper(std::function<std::future<double>()>&& func): function(std::move(func)) {}
  PromiseHolder<double> Func_std__future_double__Wrapper::call() const {
    auto __result = function();
      return []() -> PromiseHolder<double> { throw std::runtime_error("Promise<..> cannot be converted to Swift yet!"); }();
  }
  Func_std__future_double_ create_Func_std__future_double_(void* NONNULL closureHolder, PromiseHolder<double>(* NONNULL call)(void* NONNULL /* closureHolder */), void(* NONNULL destroy)(void* NONNULL)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_std__future_double_([sharedClosureHolder, call]() -> std::future<double> {
      auto __result = call(sharedClosureHolder.get());
      return __result.getFuture();
    });
  }
  std::shared_ptr<Func_std__future_double__Wrapper> share_Func_std__future_double_(const Func_std__future_double_& value) {
    return std::make_shared<Func_std__future_double__Wrapper>(value);
  }

  // pragma MARK: PromiseHolder<void>
  PromiseHolder<void> create_PromiseHolder_void_() {
    return PromiseHolder<void>();
  }

  // pragma MARK: std::function<std::future<std::string>()>
  Func_std__future_std__string__Wrapper::Func_std__future_std__string__Wrapper(const std::function<std::future<std::string>()>& func): function(func) {}
  Func_std__future_std__string__Wrapper::Func_std__future_std__string__Wrapper(std::function<std::future<std::string>()>&& func): function(std::move(func)) {}
  PromiseHolder<std::string> Func_std__future_std__string__Wrapper::call() const {
    auto __result = function();
      return []() -> PromiseHolder<std::string> { throw std::runtime_error("Promise<..> cannot be converted to Swift yet!"); }();
  }
  Func_std__future_std__string_ create_Func_std__future_std__string_(void* NONNULL closureHolder, PromiseHolder<std::string>(* NONNULL call)(void* NONNULL /* closureHolder */), void(* NONNULL destroy)(void* NONNULL)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_std__future_std__string_([sharedClosureHolder, call]() -> std::future<std::string> {
      auto __result = call(sharedClosureHolder.get());
      return __result.getFuture();
    });
  }
  std::shared_ptr<Func_std__future_std__string__Wrapper> share_Func_std__future_std__string_(const Func_std__future_std__string_& value) {
    return std::make_shared<Func_std__future_std__string__Wrapper>(value);
  }

  // pragma MARK: PromiseHolder<std::string>
  PromiseHolder<std::string> create_PromiseHolder_std__string_() {
    return PromiseHolder<std::string>();
  }

  // pragma MARK: std::optional<std::string>
  std::optional<std::string> create_std__optional_std__string_(const std::string& value) {
    return std::optional<std::string>(value);
  }

  // pragma MARK: std::optional<std::vector<std::string>>
  std::optional<std::vector<std::string>> create_std__optional_std__vector_std__string__(const std::vector<std::string>& value) {
    return std::optional<std::vector<std::string>>(value);
  }

  // pragma MARK: std::vector<Person>
  std::vector<Person> create_std__vector_Person_(size_t size) {
    std::vector<Person> vector;
    vector.reserve(size);
    return vector;
  }

  // pragma MARK: std::vector<Powertrain>
  std::vector<Powertrain> create_std__vector_Powertrain_(size_t size) {
    std::vector<Powertrain> vector;
    vector.reserve(size);
    return vector;
  }

  // pragma MARK: std::function<void(const std::vector<Powertrain>& /* array */)>
  Func_void_std__vector_Powertrain__Wrapper::Func_void_std__vector_Powertrain__Wrapper(const std::function<void(const std::vector<Powertrain>& /* array */)>& func): function(func) {}
  Func_void_std__vector_Powertrain__Wrapper::Func_void_std__vector_Powertrain__Wrapper(std::function<void(const std::vector<Powertrain>& /* array */)>&& func): function(std::move(func)) {}
  void Func_void_std__vector_Powertrain__Wrapper::call(std::vector<Powertrain> array) const {
    function(array);
  }
  Func_void_std__vector_Powertrain_ create_Func_void_std__vector_Powertrain_(void* NONNULL closureHolder, void(* NONNULL call)(void* NONNULL /* closureHolder */, std::vector<Powertrain>), void(* NONNULL destroy)(void* NONNULL)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_std__vector_Powertrain_([sharedClosureHolder, call](const std::vector<Powertrain>& array) -> void {
      call(sharedClosureHolder.get(), array);
    });
  }
  std::shared_ptr<Func_void_std__vector_Powertrain__Wrapper> share_Func_void_std__vector_Powertrain_(const Func_void_std__vector_Powertrain_& value) {
    return std::make_shared<Func_void_std__vector_Powertrain__Wrapper>(value);
  }

  // pragma MARK: std::optional<bool>
  std::optional<bool> create_std__optional_bool_(const bool& value) {
    return std::optional<bool>(value);
  }

  // pragma MARK: std::optional<Powertrain>
  std::optional<Powertrain> create_std__optional_Powertrain_(const Powertrain& value) {
    return std::optional<Powertrain>(value);
  }

  // pragma MARK: PromiseHolder<int64_t>
  PromiseHolder<int64_t> create_PromiseHolder_int64_t_() {
    return PromiseHolder<int64_t>();
  }

  // pragma MARK: std::function<void()>
  Func_void_Wrapper::Func_void_Wrapper(const std::function<void()>& func): function(func) {}
  Func_void_Wrapper::Func_void_Wrapper(std::function<void()>&& func): function(std::move(func)) {}
  void Func_void_Wrapper::call() const {
    function();
  }
  Func_void create_Func_void(void* NONNULL closureHolder, void(* NONNULL call)(void* NONNULL /* closureHolder */), void(* NONNULL destroy)(void* NONNULL)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void([sharedClosureHolder, call]() -> void {
      call(sharedClosureHolder.get());
    });
  }
  std::shared_ptr<Func_void_Wrapper> share_Func_void(const Func_void& value) {
    return std::make_shared<Func_void_Wrapper>(value);
  }

  // pragma MARK: std::optional<double>
  std::optional<double> create_std__optional_double_(const double& value) {
    return std::optional<double>(value);
  }

  // pragma MARK: std::function<void(std::optional<double> /* maybe */)>
  Func_void_std__optional_double__Wrapper::Func_void_std__optional_double__Wrapper(const std::function<void(std::optional<double> /* maybe */)>& func): function(func) {}
  Func_void_std__optional_double__Wrapper::Func_void_std__optional_double__Wrapper(std::function<void(std::optional<double> /* maybe */)>&& func): function(std::move(func)) {}
  void Func_void_std__optional_double__Wrapper::call(std::optional<double> maybe) const {
    function(maybe);
  }
  Func_void_std__optional_double_ create_Func_void_std__optional_double_(void* NONNULL closureHolder, void(* NONNULL call)(void* NONNULL /* closureHolder */, std::optional<double>), void(* NONNULL destroy)(void* NONNULL)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_std__optional_double_([sharedClosureHolder, call](std::optional<double> maybe) -> void {
      call(sharedClosureHolder.get(), maybe);
    });
  }
  std::shared_ptr<Func_void_std__optional_double__Wrapper> share_Func_void_std__optional_double_(const Func_void_std__optional_double_& value) {
    return std::make_shared<Func_void_std__optional_double__Wrapper>(value);
  }

  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridChildSpec>
  std::shared_ptr<margelo::nitro::image::HybridChildSpec> create_std__shared_ptr_margelo__nitro__image__HybridChildSpec_(size_t swiftReferenceId) {
    NitroImage::HybridChildSpecCxx swiftPart = NitroImage::HybridChildSpecCxx::getHybridChildSpecCxxById(swiftReferenceId);
    return HybridContext::getOrCreate<margelo::nitro::image::HybridChildSpecSwift>(swiftPart);
  }
  size_t get_std__shared_ptr_margelo__nitro__image__HybridChildSpec_(std__shared_ptr_margelo__nitro__image__HybridChildSpec_ cppType) {
    std::shared_ptr<margelo::nitro::image::HybridChildSpecSwift> swiftWrapper = std::dynamic_pointer_cast<margelo::nitro::image::HybridChildSpecSwift>(cppType);
  #ifdef NITRO_DEBUG
    if (swiftWrapper == nullptr) [[unlikely]] {
      throw std::runtime_error("Class \"std__shared_ptr_margelo__nitro__image__HybridChildSpec_\" is not implemented in Swift!");
    }
  #endif
    NitroImage::HybridChildSpecCxx swiftPart = swiftWrapper->getSwiftPart();
    return NitroImage::HybridChildSpecCxx::putHybridChildSpecCxx(swiftPart);
  }

  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridBaseSpec>
  std::shared_ptr<margelo::nitro::image::HybridBaseSpec> create_std__shared_ptr_margelo__nitro__image__HybridBaseSpec_(size_t swiftReferenceId) {
    NitroImage::HybridBaseSpecCxx swiftPart = NitroImage::HybridBaseSpecCxx::getHybridBaseSpecCxxById(swiftReferenceId);
    return HybridContext::getOrCreate<margelo::nitro::image::HybridBaseSpecSwift>(swiftPart);
  }
  size_t get_std__shared_ptr_margelo__nitro__image__HybridBaseSpec_(std__shared_ptr_margelo__nitro__image__HybridBaseSpec_ cppType) {
    std::shared_ptr<margelo::nitro::image::HybridBaseSpecSwift> swiftWrapper = std::dynamic_pointer_cast<margelo::nitro::image::HybridBaseSpecSwift>(cppType);
  #ifdef NITRO_DEBUG
    if (swiftWrapper == nullptr) [[unlikely]] {
      throw std::runtime_error("Class \"std__shared_ptr_margelo__nitro__image__HybridBaseSpec_\" is not implemented in Swift!");
    }
  #endif
    NitroImage::HybridBaseSpecCxx swiftPart = swiftWrapper->getSwiftPart();
    return NitroImage::HybridBaseSpecCxx::putHybridBaseSpecCxx(swiftPart);
  }

  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>
  std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec> create_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_(size_t swiftReferenceId) {
    NitroImage::HybridTestObjectSwiftKotlinSpecCxx swiftPart = NitroImage::HybridTestObjectSwiftKotlinSpecCxx::getHybridTestObjectSwiftKotlinSpecCxxById(swiftReferenceId);
    return HybridContext::getOrCreate<margelo::nitro::image::HybridTestObjectSwiftKotlinSpecSwift>(swiftPart);
  }
  size_t get_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_(std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_ cppType) {
    std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpecSwift> swiftWrapper = std::dynamic_pointer_cast<margelo::nitro::image::HybridTestObjectSwiftKotlinSpecSwift>(cppType);
  #ifdef NITRO_DEBUG
    if (swiftWrapper == nullptr) [[unlikely]] {
      throw std::runtime_error("Class \"std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_\" is not implemented in Swift!");
    }
  #endif
    NitroImage::HybridTestObjectSwiftKotlinSpecCxx swiftPart = swiftWrapper->getSwiftPart();
    return NitroImage::HybridTestObjectSwiftKotlinSpecCxx::putHybridTestObjectSwiftKotlinSpecCxx(swiftPart);
  }

} // namespace margelo::nitro::image::bridge::swift
