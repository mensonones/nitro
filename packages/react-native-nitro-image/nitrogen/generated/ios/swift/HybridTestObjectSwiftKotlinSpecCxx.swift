///
/// HybridTestObjectSwiftKotlinSpecCxx.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

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
   * Get the actual `HybridTestObjectSwiftKotlinSpec` instance this class wraps.
   */
  @inline(__always)
  public func getHybridTestObjectSwiftKotlinSpec() -> any HybridTestObjectSwiftKotlinSpec {
    return __implementation
  }

  /**
   * Create a new `HybridTestObjectSwiftKotlinSpecCxx` that wraps the given `HybridTestObjectSwiftKotlinSpec`.
   * All properties and methods bridge to C++ types.
   */
  public init(_ implementation: any HybridTestObjectSwiftKotlinSpec) {
    self.__implementation = implementation
    /* no base class */
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
  public var thisObject: HybridTestObjectSwiftKotlinSpecCxx {
    @inline(__always)
    get {
      return self.__implementation.thisObject.createCxxBridge()
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
  public func newTestObject() -> HybridTestObjectSwiftKotlinSpecCxx {
    do {
      let __result = try self.__implementation.newTestObject()
      return __result.createCxxBridge()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func simpleFunc() -> Void {
    do {
      try self.__implementation.simpleFunc()
      return 
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func addNumbers(a: Double, b: Double) -> Double {
    do {
      let __result = try self.__implementation.addNumbers(a: a, b: b)
      return __result
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func addStrings(a: std.string, b: std.string) -> std.string {
    do {
      let __result = try self.__implementation.addStrings(a: String(a), b: String(b))
      return std.string(__result)
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func multipleArguments(num: Double, str: std.string, boo: Bool) -> Void {
    do {
      try self.__implementation.multipleArguments(num: num, str: String(str), boo: boo)
      return 
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func createMap() -> margelo.nitro.TSharedMap {
    do {
      let __result = try self.__implementation.createMap()
      return __result.cppPart
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func mapRoundtrip(map: margelo.nitro.TSharedMap) -> margelo.nitro.TSharedMap {
    do {
      let __result = try self.__implementation.mapRoundtrip(map: AnyMapHolder(withCppPart: map))
      return __result.cppPart
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func funcThatThrows() -> Double {
    do {
      let __result = try self.__implementation.funcThatThrows()
      return __result
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
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
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func tryMiddleParam(num: Double, boo: bridge.std__optional_bool_, str: std.string) -> std.string {
    do {
      let __result = try self.__implementation.tryMiddleParam(num: num, boo: boo.value, str: String(str))
      return std.string(__result)
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
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
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func calculateFibonacciSync(value: Double) -> Int64 {
    do {
      let __result = try self.__implementation.calculateFibonacciSync(value: value)
      return __result
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
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
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
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
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
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
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
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
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
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
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func getCar() -> Car {
    do {
      let __result = try self.__implementation.getCar()
      return __result
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func isCarElectric(car: Car) -> Bool {
    do {
      let __result = try self.__implementation.isCarElectric(car: car)
      return __result
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
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
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func createArrayBuffer() -> ArrayBufferHolder {
    do {
      let __result = try self.__implementation.createArrayBuffer()
      return __result
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func getBufferLastItem(buffer: ArrayBufferHolder) -> Double {
    do {
      let __result = try self.__implementation.getBufferLastItem(buffer: buffer)
      return __result
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func setAllValuesTo(buffer: ArrayBufferHolder, value: Double) -> Void {
    do {
      try self.__implementation.setAllValuesTo(buffer: buffer, value: value)
      return 
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func createChild() -> HybridChildSpecCxx {
    do {
      let __result = try self.__implementation.createChild()
      return __result.createCxxBridge()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func createBase() -> HybridBaseSpecCxx {
    do {
      let __result = try self.__implementation.createBase()
      return __result.createCxxBridge()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func createBaseActualChild() -> HybridBaseSpecCxx {
    do {
      let __result = try self.__implementation.createBaseActualChild()
      return __result.createCxxBridge()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func bounceChild(child: HybridChildSpecCxx) -> HybridChildSpecCxx {
    do {
      let __result = try self.__implementation.bounceChild(child: child.getHybridChildSpec())
      return __result.createCxxBridge()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func bounceBase(base: HybridBaseSpecCxx) -> HybridBaseSpecCxx {
    do {
      let __result = try self.__implementation.bounceBase(base: base.getHybridBaseSpec())
      return __result.createCxxBridge()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func bounceChildBase(child: HybridChildSpecCxx) -> HybridBaseSpecCxx {
    do {
      let __result = try self.__implementation.bounceChildBase(child: child.getHybridChildSpec())
      return __result.createCxxBridge()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func castBase(base: HybridBaseSpecCxx) -> HybridChildSpecCxx {
    do {
      let __result = try self.__implementation.castBase(base: base.getHybridBaseSpec())
      return __result.createCxxBridge()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
}
