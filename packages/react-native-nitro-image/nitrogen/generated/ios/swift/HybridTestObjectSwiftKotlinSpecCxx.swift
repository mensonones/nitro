///
/// HybridTestObjectSwiftKotlinSpecCxx.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * Helper class for converting instances of `HybridTestObjectSwiftKotlinSpecCxx` from- and to unsafe pointers.
 * This is useful to pass Swift classes to C++, without having to strongly type the C++ function signature.
 * The actual Swift type can be included in the .cpp file, without having to forward-declare anything in .hpp.
 */
public final class HybridTestObjectSwiftKotlinSpecCxxUnsafe {
  /**
   * Casts a `HybridTestObjectSwiftKotlinSpecCxx` instance to a retained unsafe raw pointer.
   * This acquires one additional strong reference on the object!
   */
  public static func toUnsafe(_ instance: HybridTestObjectSwiftKotlinSpecCxx) -> UnsafeMutableRawPointer {
    return Unmanaged.passRetained(instance).toOpaque()
  }

  /**
   * Casts an unsafe pointer to a `HybridTestObjectSwiftKotlinSpecCxx`.
   * The pointer has to be a retained opaque `Unmanaged<HybridTestObjectSwiftKotlinSpecCxx>`.
   * This removes one strong reference from the object!
   */
  public static func fromUnsafe(_ pointer: UnsafeMutableRawPointer) -> HybridTestObjectSwiftKotlinSpecCxx {
    return Unmanaged<HybridTestObjectSwiftKotlinSpecCxx>.fromOpaque(pointer).takeRetainedValue()
  }
}

/**
 * A class implementation that bridges HybridTestObjectSwiftKotlinSpec over to C++.
 * In C++, we cannot use Swift protocols - so we need to wrap it in a class to make it strongly defined.
 *
 * Also, some Swift types need to be bridged with special handling:
 * - Enums need to be wrapped in Structs, otherwise they cannot be accessed bi-directionally (Swift bug: https://github.com/swiftlang/swift/issues/75330)
 * - Other HybridObjects need to be wrapped/unwrapped from the Swift TCxx wrapper
 * - Throwing methods need to be wrapped with a Result<T, Error> type, as exceptions cannot be propagated to C++
 */
public class HybridTestObjectSwiftKotlinSpecCxx {
  /**
   * The Swift <> C++ bridge's namespace (`margelo::nitro::image::bridge::swift`)
   * from `NitroImage-Swift-Cxx-Bridge.hpp`.
   * This contains specialized C++ templates, and C++ helper functions that can be accessed from Swift.
   */
  public typealias bridge = margelo.nitro.image.bridge.swift

  /**
   * Holds an instance of the `HybridTestObjectSwiftKotlinSpec` Swift protocol.
   */
  private var __implementation: any HybridTestObjectSwiftKotlinSpec

  /**
   * Create a new `HybridTestObjectSwiftKotlinSpecCxx` that wraps the given `HybridTestObjectSwiftKotlinSpec`.
   * All properties and methods bridge to C++ types.
   */
  public init(_ implementation: some HybridTestObjectSwiftKotlinSpec) {
    self.__implementation = implementation
    /* no base class */
  }

  /**
   * Get the actual `HybridTestObjectSwiftKotlinSpec` instance this class wraps.
   */
  @inline(__always)
  public func getHybridTestObjectSwiftKotlinSpec() -> any HybridTestObjectSwiftKotlinSpec {
    return __implementation
  }

  /**
   * Contains a (weak) reference to the C++ HybridObject to cache it.
   */
  public var hybridContext: margelo.nitro.HybridContext {
    @inline(__always)
    get {
      return self.__implementation.hybridContext
    }
    @inline(__always)
    set {
      self.__implementation.hybridContext = newValue
    }
  }

  /**
   * Get the memory size of the Swift class (plus size of any other allocations)
   * so the JS VM can properly track it and garbage-collect the JS object if needed.
   */
  @inline(__always)
  public var memorySize: Int {
    return self.__implementation.memorySize
  }

  // Properties
  public var thisObject: bridge.std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_ {
    @inline(__always)
    get {
      return { () -> bridge.std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_ in
        let __cxxWrapped = HybridTestObjectSwiftKotlinSpecCxx(self.__implementation.thisObject)
        let __pointer = HybridTestObjectSwiftKotlinSpecCxxUnsafe.toUnsafe(__cxxWrapped)
        return bridge.create_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_(__pointer)
      }()
    }
  }
  
  public var optionalHybrid: bridge.std__optional_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec__ {
    @inline(__always)
    get {
      return { () -> bridge.std__optional_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec__ in
        if let __unwrappedValue = self.__implementation.optionalHybrid {
          return bridge.create_std__optional_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec__({ () -> bridge.std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_ in
            let __cxxWrapped = HybridTestObjectSwiftKotlinSpecCxx(__unwrappedValue)
            let __pointer = HybridTestObjectSwiftKotlinSpecCxxUnsafe.toUnsafe(__cxxWrapped)
            return bridge.create_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_(__pointer)
          }())
        } else {
          return .init()
        }
      }()
    }
    @inline(__always)
    set {
      self.__implementation.optionalHybrid = { () -> (any HybridTestObjectSwiftKotlinSpec)? in
        if let __unwrapped = newValue.value {
          return { () -> HybridTestObjectSwiftKotlinSpec in
            let __unsafePointer = bridge.get_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_(__unwrapped)
            let __instance = HybridTestObjectSwiftKotlinSpecCxxUnsafe.fromUnsafe(__unsafePointer)
            return __instance.getHybridTestObjectSwiftKotlinSpec()
          }()
        } else {
          return nil
        }
      }()
    }
  }
  
  public var numberValue: Double {
    @inline(__always)
    get {
      return self.__implementation.numberValue
    }
    @inline(__always)
    set {
      self.__implementation.numberValue = newValue
    }
  }
  
  public var boolValue: Bool {
    @inline(__always)
    get {
      return self.__implementation.boolValue
    }
    @inline(__always)
    set {
      self.__implementation.boolValue = newValue
    }
  }
  
  public var stringValue: std.string {
    @inline(__always)
    get {
      return std.string(self.__implementation.stringValue)
    }
    @inline(__always)
    set {
      self.__implementation.stringValue = String(newValue)
    }
  }
  
  public var bigintValue: Int64 {
    @inline(__always)
    get {
      return self.__implementation.bigintValue
    }
    @inline(__always)
    set {
      self.__implementation.bigintValue = newValue
    }
  }
  
  public var stringOrUndefined: bridge.std__optional_std__string_ {
    @inline(__always)
    get {
      return { () -> bridge.std__optional_std__string_ in
        if let __unwrappedValue = self.__implementation.stringOrUndefined {
          return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
        } else {
          return .init()
        }
      }()
    }
    @inline(__always)
    set {
      self.__implementation.stringOrUndefined = { () -> String? in
        if let __unwrapped = newValue.value {
          return String(__unwrapped)
        } else {
          return nil
        }
      }()
    }
  }
  
  public var stringOrNull: bridge.std__optional_std__string_ {
    @inline(__always)
    get {
      return { () -> bridge.std__optional_std__string_ in
        if let __unwrappedValue = self.__implementation.stringOrNull {
          return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
        } else {
          return .init()
        }
      }()
    }
    @inline(__always)
    set {
      self.__implementation.stringOrNull = { () -> String? in
        if let __unwrapped = newValue.value {
          return String(__unwrapped)
        } else {
          return nil
        }
      }()
    }
  }
  
  public var optionalString: bridge.std__optional_std__string_ {
    @inline(__always)
    get {
      return { () -> bridge.std__optional_std__string_ in
        if let __unwrappedValue = self.__implementation.optionalString {
          return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
        } else {
          return .init()
        }
      }()
    }
    @inline(__always)
    set {
      self.__implementation.optionalString = { () -> String? in
        if let __unwrapped = newValue.value {
          return String(__unwrapped)
        } else {
          return nil
        }
      }()
    }
  }
  
  public var optionalArray: bridge.std__optional_std__vector_std__string__ {
    @inline(__always)
    get {
      return { () -> bridge.std__optional_std__vector_std__string__ in
        if let __unwrappedValue = self.__implementation.optionalArray {
          return bridge.create_std__optional_std__vector_std__string__({ () -> bridge.std__vector_std__string_ in
            var __vector = bridge.create_std__vector_std__string_(__unwrappedValue.count)
            for __item in __unwrappedValue {
              __vector.push_back(std.string(__item))
            }
            return __vector
          }())
        } else {
          return .init()
        }
      }()
    }
    @inline(__always)
    set {
      self.__implementation.optionalArray = { () -> [String]? in
        if let __unwrapped = newValue.value {
          return __unwrapped.map({ __item in String(__item) })
        } else {
          return nil
        }
      }()
    }
  }
  
  public var optionalEnum: bridge.std__optional_Powertrain_ {
    @inline(__always)
    get {
      return { () -> bridge.std__optional_Powertrain_ in
        if let __unwrappedValue = self.__implementation.optionalEnum {
          return bridge.create_std__optional_Powertrain_(__unwrappedValue)
        } else {
          return .init()
        }
      }()
    }
    @inline(__always)
    set {
      self.__implementation.optionalEnum = newValue.value
    }
  }
  
  public var someVariant: bridge.std__variant_std__string__double_ {
    @inline(__always)
    get {
      return { () -> bridge.std__variant_std__string__double_ in
        switch self.__implementation.someVariant {
          case .someString(let __value):
            return bridge.create_std__variant_std__string__double_(std.string(__value))
          case .someDouble(let __value):
            return bridge.create_std__variant_std__string__double_(__value)
        }
      }()
    }
    @inline(__always)
    set {
      self.__implementation.someVariant = { () -> Variant_String_Double in
        switch newValue.index() {
          case 0:
            let __actual = bridge.get_std__variant_std__string__double__0(newValue)
            return .someString(String(__actual))
          case 1:
            let __actual = bridge.get_std__variant_std__string__double__1(newValue)
            return .someDouble(__actual)
          default:
            fatalError("Variant can never have index \(newValue.index())!")
        }
      }()
    }
  }

  // Methods
  @inline(__always)
  public func newTestObject() -> bridge.std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_ {
    do {
      let __result = try self.__implementation.newTestObject()
      return { () -> bridge.std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_ in
        let __cxxWrapped = HybridTestObjectSwiftKotlinSpecCxx(__result)
        let __pointer = HybridTestObjectSwiftKotlinSpecCxxUnsafe.toUnsafe(__cxxWrapped)
        return bridge.create_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_(__pointer)
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func simpleFunc() -> Void {
    do {
      try self.__implementation.simpleFunc()
      return 
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func addNumbers(a: Double, b: Double) -> Double {
    do {
      let __result = try self.__implementation.addNumbers(a: a, b: b)
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func addStrings(a: std.string, b: std.string) -> std.string {
    do {
      let __result = try self.__implementation.addStrings(a: String(a), b: String(b))
      return std.string(__result)
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func multipleArguments(num: Double, str: std.string, boo: Bool) -> Void {
    do {
      try self.__implementation.multipleArguments(num: num, str: String(str), boo: boo)
      return 
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func bounceStrings(array: bridge.std__vector_std__string_) -> bridge.std__vector_std__string_ {
    do {
      let __result = try self.__implementation.bounceStrings(array: array.map({ __item in String(__item) }))
      return { () -> bridge.std__vector_std__string_ in
        var __vector = bridge.create_std__vector_std__string_(__result.count)
        for __item in __result {
          __vector.push_back(std.string(__item))
        }
        return __vector
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func bounceNumbers(array: bridge.std__vector_double_) -> bridge.std__vector_double_ {
    do {
      let __result = try self.__implementation.bounceNumbers(array: array.map({ __item in __item }))
      return { () -> bridge.std__vector_double_ in
        var __vector = bridge.create_std__vector_double_(__result.count)
        for __item in __result {
          __vector.push_back(__item)
        }
        return __vector
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func bounceStructs(array: bridge.std__vector_Person_) -> bridge.std__vector_Person_ {
    do {
      let __result = try self.__implementation.bounceStructs(array: array.map({ __item in __item }))
      return { () -> bridge.std__vector_Person_ in
        var __vector = bridge.create_std__vector_Person_(__result.count)
        for __item in __result {
          __vector.push_back(__item)
        }
        return __vector
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func bounceEnums(array: bridge.std__vector_Powertrain_) -> bridge.std__vector_Powertrain_ {
    do {
      let __result = try self.__implementation.bounceEnums(array: array.map({ __item in __item }))
      return { () -> bridge.std__vector_Powertrain_ in
        var __vector = bridge.create_std__vector_Powertrain_(__result.count)
        for __item in __result {
          __vector.push_back(__item)
        }
        return __vector
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func complexEnumCallback(array: bridge.std__vector_Powertrain_, callback: bridge.Func_void_std__vector_Powertrain_) -> Void {
    do {
      try self.__implementation.complexEnumCallback(array: array.map({ __item in __item }), callback: { () -> (([Powertrain]) -> Void) in
        let __sharedClosure = bridge.share_Func_void_std__vector_Powertrain_(callback)
        return { (__array: [Powertrain]) -> Void in
          __sharedClosure.pointee.call({ () -> bridge.std__vector_Powertrain_ in
          var __vector = bridge.create_std__vector_Powertrain_(__array.count)
          for __item in __array {
            __vector.push_back(__item)
          }
          return __vector
        }())
        }
      }())
      return 
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func createMap() -> margelo.nitro.TSharedMap {
    do {
      let __result = try self.__implementation.createMap()
      return __result.cppPart
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func mapRoundtrip(map: margelo.nitro.TSharedMap) -> margelo.nitro.TSharedMap {
    do {
      let __result = try self.__implementation.mapRoundtrip(map: AnyMapHolder(withCppPart: map))
      return __result.cppPart
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func funcThatThrows() -> Double {
    do {
      let __result = try self.__implementation.funcThatThrows()
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func tryOptionalParams(num: Double, boo: Bool, str: bridge.std__optional_std__string_) -> std.string {
    do {
      let __result = try self.__implementation.tryOptionalParams(num: num, boo: boo, str: { () -> String? in
        if let __unwrapped = str.value {
          return String(__unwrapped)
        } else {
          return nil
        }
      }())
      return std.string(__result)
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func tryMiddleParam(num: Double, boo: bridge.std__optional_bool_, str: std.string) -> std.string {
    do {
      let __result = try self.__implementation.tryMiddleParam(num: num, boo: boo.value, str: String(str))
      return std.string(__result)
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func tryOptionalEnum(value: bridge.std__optional_Powertrain_) -> bridge.std__optional_Powertrain_ {
    do {
      let __result = try self.__implementation.tryOptionalEnum(value: value.value)
      return { () -> bridge.std__optional_Powertrain_ in
        if let __unwrappedValue = __result {
          return bridge.create_std__optional_Powertrain_(__unwrappedValue)
        } else {
          return .init()
        }
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func calculateFibonacciSync(value: Double) -> Int64 {
    do {
      let __result = try self.__implementation.calculateFibonacciSync(value: value)
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func calculateFibonacciAsync(value: Double) -> bridge.PromiseHolder_int64_t_ {
    do {
      let __result = try self.__implementation.calculateFibonacciAsync(value: value)
      return { () -> bridge.PromiseHolder_int64_t_ in
        let __promiseHolder = bridge.create_PromiseHolder_int64_t_()
        __result
          .then({ __result in __promiseHolder.resolve(__result) })
          .catch({ __error in __promiseHolder.reject(std.string(String(describing: __error))) })
        return __promiseHolder
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func wait(seconds: Double) -> bridge.PromiseHolder_void_ {
    do {
      let __result = try self.__implementation.wait(seconds: seconds)
      return { () -> bridge.PromiseHolder_void_ in
        let __promiseHolder = bridge.create_PromiseHolder_void_()
        __result
          .then({ __result in __promiseHolder.resolve() })
          .catch({ __error in __promiseHolder.reject(std.string(String(describing: __error))) })
        return __promiseHolder
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func callCallback(callback: bridge.Func_void) -> Void {
    do {
      try self.__implementation.callCallback(callback: { () -> (() -> Void) in
        let __sharedClosure = bridge.share_Func_void(callback)
        return { () -> Void in
          __sharedClosure.pointee.call()
        }
      }())
      return 
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func callAll(first: bridge.Func_void, second: bridge.Func_void, third: bridge.Func_void) -> Void {
    do {
      try self.__implementation.callAll(first: { () -> (() -> Void) in
        let __sharedClosure = bridge.share_Func_void(first)
        return { () -> Void in
          __sharedClosure.pointee.call()
        }
      }(), second: { () -> (() -> Void) in
        let __sharedClosure = bridge.share_Func_void(second)
        return { () -> Void in
          __sharedClosure.pointee.call()
        }
      }(), third: { () -> (() -> Void) in
        let __sharedClosure = bridge.share_Func_void(third)
        return { () -> Void in
          __sharedClosure.pointee.call()
        }
      }())
      return 
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func callWithOptional(value: bridge.std__optional_double_, callback: bridge.Func_void_std__optional_double_) -> Void {
    do {
      try self.__implementation.callWithOptional(value: value.value, callback: { () -> ((Double?) -> Void) in
        let __sharedClosure = bridge.share_Func_void_std__optional_double_(callback)
        return { (__maybe: Double?) -> Void in
          __sharedClosure.pointee.call({ () -> bridge.std__optional_double_ in
          if let __unwrappedValue = __maybe {
            return bridge.create_std__optional_double_(__unwrappedValue)
          } else {
            return .init()
          }
        }())
        }
      }())
      return 
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getCar() -> Car {
    do {
      let __result = try self.__implementation.getCar()
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func isCarElectric(car: Car) -> Bool {
    do {
      let __result = try self.__implementation.isCarElectric(car: car)
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getDriver(car: Car) -> bridge.std__optional_Person_ {
    do {
      let __result = try self.__implementation.getDriver(car: car)
      return { () -> bridge.std__optional_Person_ in
        if let __unwrappedValue = __result {
          return bridge.create_std__optional_Person_(__unwrappedValue)
        } else {
          return .init()
        }
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func createArrayBuffer() -> ArrayBufferHolder {
    do {
      let __result = try self.__implementation.createArrayBuffer()
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getBufferLastItem(buffer: ArrayBufferHolder) -> Double {
    do {
      let __result = try self.__implementation.getBufferLastItem(buffer: buffer)
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func setAllValuesTo(buffer: ArrayBufferHolder, value: Double) -> Void {
    do {
      try self.__implementation.setAllValuesTo(buffer: buffer, value: value)
      return 
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func createArrayBufferAsync() -> bridge.PromiseHolder_std__shared_ptr_ArrayBuffer__ {
    do {
      let __result = try self.__implementation.createArrayBufferAsync()
      return { () -> bridge.PromiseHolder_std__shared_ptr_ArrayBuffer__ in
        let __promiseHolder = bridge.create_PromiseHolder_std__shared_ptr_ArrayBuffer__()
        __result
          .then({ __result in __promiseHolder.resolve(__result.getArrayBuffer()) })
          .catch({ __error in __promiseHolder.reject(std.string(String(describing: __error))) })
        return __promiseHolder
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func createChild() -> bridge.std__shared_ptr_margelo__nitro__image__HybridChildSpec_ {
    do {
      let __result = try self.__implementation.createChild()
      return { () -> bridge.std__shared_ptr_margelo__nitro__image__HybridChildSpec_ in
        let __cxxWrapped = HybridChildSpecCxx(__result)
        let __pointer = HybridChildSpecCxxUnsafe.toUnsafe(__cxxWrapped)
        return bridge.create_std__shared_ptr_margelo__nitro__image__HybridChildSpec_(__pointer)
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func createBase() -> bridge.std__shared_ptr_margelo__nitro__image__HybridBaseSpec_ {
    do {
      let __result = try self.__implementation.createBase()
      return { () -> bridge.std__shared_ptr_margelo__nitro__image__HybridBaseSpec_ in
        let __cxxWrapped = HybridBaseSpecCxx(__result)
        let __pointer = HybridBaseSpecCxxUnsafe.toUnsafe(__cxxWrapped)
        return bridge.create_std__shared_ptr_margelo__nitro__image__HybridBaseSpec_(__pointer)
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func createBaseActualChild() -> bridge.std__shared_ptr_margelo__nitro__image__HybridBaseSpec_ {
    do {
      let __result = try self.__implementation.createBaseActualChild()
      return { () -> bridge.std__shared_ptr_margelo__nitro__image__HybridBaseSpec_ in
        let __cxxWrapped = HybridBaseSpecCxx(__result)
        let __pointer = HybridBaseSpecCxxUnsafe.toUnsafe(__cxxWrapped)
        return bridge.create_std__shared_ptr_margelo__nitro__image__HybridBaseSpec_(__pointer)
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func bounceChild(child: bridge.std__shared_ptr_margelo__nitro__image__HybridChildSpec_) -> bridge.std__shared_ptr_margelo__nitro__image__HybridChildSpec_ {
    do {
      let __result = try self.__implementation.bounceChild(child: { () -> HybridChildSpec in
        let __unsafePointer = bridge.get_std__shared_ptr_margelo__nitro__image__HybridChildSpec_(child)
        let __instance = HybridChildSpecCxxUnsafe.fromUnsafe(__unsafePointer)
        return __instance.getHybridChildSpec()
      }())
      return { () -> bridge.std__shared_ptr_margelo__nitro__image__HybridChildSpec_ in
        let __cxxWrapped = HybridChildSpecCxx(__result)
        let __pointer = HybridChildSpecCxxUnsafe.toUnsafe(__cxxWrapped)
        return bridge.create_std__shared_ptr_margelo__nitro__image__HybridChildSpec_(__pointer)
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func bounceBase(base: bridge.std__shared_ptr_margelo__nitro__image__HybridBaseSpec_) -> bridge.std__shared_ptr_margelo__nitro__image__HybridBaseSpec_ {
    do {
      let __result = try self.__implementation.bounceBase(base: { () -> HybridBaseSpec in
        let __unsafePointer = bridge.get_std__shared_ptr_margelo__nitro__image__HybridBaseSpec_(base)
        let __instance = HybridBaseSpecCxxUnsafe.fromUnsafe(__unsafePointer)
        return __instance.getHybridBaseSpec()
      }())
      return { () -> bridge.std__shared_ptr_margelo__nitro__image__HybridBaseSpec_ in
        let __cxxWrapped = HybridBaseSpecCxx(__result)
        let __pointer = HybridBaseSpecCxxUnsafe.toUnsafe(__cxxWrapped)
        return bridge.create_std__shared_ptr_margelo__nitro__image__HybridBaseSpec_(__pointer)
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func bounceChildBase(child: bridge.std__shared_ptr_margelo__nitro__image__HybridChildSpec_) -> bridge.std__shared_ptr_margelo__nitro__image__HybridBaseSpec_ {
    do {
      let __result = try self.__implementation.bounceChildBase(child: { () -> HybridChildSpec in
        let __unsafePointer = bridge.get_std__shared_ptr_margelo__nitro__image__HybridChildSpec_(child)
        let __instance = HybridChildSpecCxxUnsafe.fromUnsafe(__unsafePointer)
        return __instance.getHybridChildSpec()
      }())
      return { () -> bridge.std__shared_ptr_margelo__nitro__image__HybridBaseSpec_ in
        let __cxxWrapped = HybridBaseSpecCxx(__result)
        let __pointer = HybridBaseSpecCxxUnsafe.toUnsafe(__cxxWrapped)
        return bridge.create_std__shared_ptr_margelo__nitro__image__HybridBaseSpec_(__pointer)
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func castBase(base: bridge.std__shared_ptr_margelo__nitro__image__HybridBaseSpec_) -> bridge.std__shared_ptr_margelo__nitro__image__HybridChildSpec_ {
    do {
      let __result = try self.__implementation.castBase(base: { () -> HybridBaseSpec in
        let __unsafePointer = bridge.get_std__shared_ptr_margelo__nitro__image__HybridBaseSpec_(base)
        let __instance = HybridBaseSpecCxxUnsafe.fromUnsafe(__unsafePointer)
        return __instance.getHybridBaseSpec()
      }())
      return { () -> bridge.std__shared_ptr_margelo__nitro__image__HybridChildSpec_ in
        let __cxxWrapped = HybridChildSpecCxx(__result)
        let __pointer = HybridChildSpecCxxUnsafe.toUnsafe(__cxxWrapped)
        return bridge.create_std__shared_ptr_margelo__nitro__image__HybridChildSpec_(__pointer)
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
}
