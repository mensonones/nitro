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
  private var implementation: HybridTestObjectSwiftKotlinSpec

  /**
   * Get the actual `HybridTestObjectSwiftKotlinSpec` instance this class wraps.
   */
  @inline(__always)
  public func getHybridTestObjectSwiftKotlinSpec() -> HybridTestObjectSwiftKotlinSpec {
    return implementation
  }

  /**
   * Create a new `HybridTestObjectSwiftKotlinSpecCxx` that wraps the given `HybridTestObjectSwiftKotlinSpec`.
   * All properties and methods bridge to C++ types.
   */
  public init(_ implementation: HybridTestObjectSwiftKotlinSpec) {
    self.implementation = implementation
    
  }

  /**
   * Contains a (weak) reference to the C++ HybridObject to cache it.
   */
  public var hybridContext: margelo.nitro.HybridContext {
    get {
      return self.implementation.hybridContext
    }
    set {
      self.implementation.hybridContext = newValue
    }
  }

  /**
   * Get the memory size of the Swift class (plus size of any other allocations)
   * so the JS VM can properly track it and garbage-collect the JS object if needed.
   */
  public var memorySize: Int {
    return self.implementation.memorySize
  }

  // Properties
  public var thisObject: HybridTestObjectSwiftKotlinSpecCxx {
    @inline(__always)
    get {
      return self.implementation.thisObject.createCxxBridge()
    }
  }
  
  public var numberValue: Double {
    @inline(__always)
    get {
      return self.implementation.numberValue
    }
    @inline(__always)
    set {
      self.implementation.numberValue = newValue
    }
  }
  
  public var boolValue: Bool {
    @inline(__always)
    get {
      return self.implementation.boolValue
    }
    @inline(__always)
    set {
      self.implementation.boolValue = newValue
    }
  }
  
  public var stringValue: std.string {
    @inline(__always)
    get {
      return std.string(self.implementation.stringValue)
    }
    @inline(__always)
    set {
      self.implementation.stringValue = String(newValue)
    }
  }
  
  public var bigintValue: Int64 {
    @inline(__always)
    get {
      return self.implementation.bigintValue
    }
    @inline(__always)
    set {
      self.implementation.bigintValue = newValue
    }
  }
  
  public var stringOrUndefined: std.string? {
    @inline(__always)
    get {
      return { () -> std.string? in
        if let __actualValue = self.implementation.stringOrUndefined {
          return std.string(__actualValue)
        } else {
          return nil
        }
      }()
    }
    @inline(__always)
    set {
      self.implementation.stringOrUndefined = { () -> std.string? in
        if let __actualValue = newValue {
          return String(__actualValue)
        } else {
          return nil
        }
      }()
    }
  }
  
  public var stringOrNull: std.string? {
    @inline(__always)
    get {
      return { () -> std.string? in
        if let __actualValue = self.implementation.stringOrNull {
          return std.string(__actualValue)
        } else {
          return nil
        }
      }()
    }
    @inline(__always)
    set {
      self.implementation.stringOrNull = { () -> std.string? in
        if let __actualValue = newValue {
          return String(__actualValue)
        } else {
          return nil
        }
      }()
    }
  }
  
  public var optionalString: std.string? {
    @inline(__always)
    get {
      return { () -> std.string? in
        if let __actualValue = self.implementation.optionalString {
          return std.string(__actualValue)
        } else {
          return nil
        }
      }()
    }
    @inline(__always)
    set {
      self.implementation.optionalString = { () -> std.string? in
        if let __actualValue = newValue {
          return String(__actualValue)
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
        switch self.implementation.someVariant {
          case .someString(let value):
            return bridge.create_std__variant_std__string__double_(std.string(value))
          case .someDouble(let value):
            return bridge.create_std__variant_std__string__double_(value)
        }
      }()
    }
    @inline(__always)
    set {
      self.implementation.someVariant = { () -> Variant_String_Double in
        switch newValue.index() {
          case 0:
            let actual = bridge.get_std__variant_std__string__double__0(newValue)
            return .someString(String(actual))
          case 1:
            let actual = bridge.get_std__variant_std__string__double__1(newValue)
            return .someDouble(actual)
          default:
            fatalError("Variant can never have index \(newValue.index())!")
        }
      }()
    }
  }
  
  public var base: HybridBaseSpecCxx? {
    @inline(__always)
    get {
      return { () -> HybridBaseSpecCxx? in
        if let __actualValue = self.implementation.base {
          return __actualValue.createCxxBridge()
        } else {
          return nil
        }
      }()
    }
    @inline(__always)
    set {
      self.implementation.base = { () -> HybridBaseSpecCxx? in
        if let __actualValue = newValue {
          return __actualValue.getHybridBaseSpec()
        } else {
          return nil
        }
      }()
    }
  }

  // Methods
  @inline(__always)
  public func newTestObject() -> HybridTestObjectSwiftKotlinSpecCxx {
    do {
      let result = try self.implementation.newTestObject()
      return result.createCxxBridge()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func simpleFunc() -> Void {
    do {
      try self.implementation.simpleFunc()
      return 
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func addNumbers(a: Double, b: Double) -> Double {
    do {
      let result = try self.implementation.addNumbers(a: a, b: b)
      return result
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func addStrings(a: std.string, b: std.string) -> std.string {
    do {
      let result = try self.implementation.addStrings(a: String(a), b: String(b))
      return std.string(result)
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func multipleArguments(num: Double, str: std.string, boo: Bool) -> Void {
    do {
      try self.implementation.multipleArguments(num: num, str: String(str), boo: boo)
      return 
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func createMap() -> margelo.nitro.TSharedMap {
    do {
      let result = try self.implementation.createMap()
      return result.cppPart
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func mapRoundtrip(map: margelo.nitro.TSharedMap) -> margelo.nitro.TSharedMap {
    do {
      let result = try self.implementation.mapRoundtrip(map: AnyMapHolder(withCppPart: map))
      return result.cppPart
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func funcThatThrows() -> Double {
    do {
      let result = try self.implementation.funcThatThrows()
      return result
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func tryOptionalParams(num: Double, boo: Bool, str: std.string?) -> std.string {
    do {
      let result = try self.implementation.tryOptionalParams(num: num, boo: boo, str: { () -> std.string? in
        if let __actualValue = str {
          return String(__actualValue)
        } else {
          return nil
        }
      }())
      return std.string(result)
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func tryMiddleParam(num: Double, boo: Bool?, str: std.string) -> std.string {
    do {
      let result = try self.implementation.tryMiddleParam(num: num, boo: { () -> Bool? in
        if let __actualValue = boo {
          return __actualValue
        } else {
          return nil
        }
      }(), str: String(str))
      return std.string(result)
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func tryOptionalEnum(value: Int32?) -> Int32? {
    do {
      let result = try self.implementation.tryOptionalEnum(value: { () -> Int32? in
        if let __actualValue = value {
          return __actualValue
        } else {
          return nil
        }
      }())
      return { () -> Int32? in
        if let __actualValue = result {
          return __actualValue
        } else {
          return nil
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
      let result = try self.implementation.calculateFibonacciSync(value: value)
      return result
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func calculateFibonacciAsync(value: Double) -> bridge.PromiseHolder_int64_t_ {
    do {
      let result = try self.implementation.calculateFibonacciAsync(value: value)
      return { () -> bridge.PromiseHolder_int64_t_ in
        let promiseHolder = bridge.create_PromiseHolder_int64_t_()
        result
          .then({ __result in promiseHolder.resolve(__result) })
          .catch({ __error in promiseHolder.reject(std.string(String(describing: __error))) })
        return promiseHolder
      }()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func wait(seconds: Double) -> bridge.PromiseHolder_void_ {
    do {
      let result = try self.implementation.wait(seconds: seconds)
      return { () -> bridge.PromiseHolder_void_ in
        let promiseHolder = bridge.create_PromiseHolder_void_()
        result
          .then({ __result in promiseHolder.resolve() })
          .catch({ __error in promiseHolder.reject(std.string(String(describing: __error))) })
        return promiseHolder
      }()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func callCallback(callback: bridge.Func_void) -> Void {
    do {
      try self.implementation.callCallback(callback: { () -> (() -> Void) in
        let shared = bridge.share_Func_void(callback)
        return { () -> Void in
          shared.pointee.call()
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
      try self.implementation.callAll(first: { () -> (() -> Void) in
        let shared = bridge.share_Func_void(first)
        return { () -> Void in
          shared.pointee.call()
        }
      }(), second: { () -> (() -> Void) in
        let shared = bridge.share_Func_void(second)
        return { () -> Void in
          shared.pointee.call()
        }
      }(), third: { () -> (() -> Void) in
        let shared = bridge.share_Func_void(third)
        return { () -> Void in
          shared.pointee.call()
        }
      }())
      return 
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func callWithOptional(value: Double?, callback: bridge.Func_void_std__optional_double_) -> Void {
    do {
      try self.implementation.callWithOptional(value: { () -> Double? in
        if let __actualValue = value {
          return __actualValue
        } else {
          return nil
        }
      }(), callback: { () -> ((Double?) -> Void) in
        let shared = bridge.share_Func_void_std__optional_double_(callback)
        return { (maybe: Double?) -> Void in
          shared.pointee.call({ () -> Double? in
          if let __actualValue = maybe {
            return __actualValue
          } else {
            return nil
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
      let result = try self.implementation.getCar()
      return result
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func isCarElectric(car: Car) -> Bool {
    do {
      let result = try self.implementation.isCarElectric(car: car)
      return result
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func getDriver(car: Car) -> Person? {
    do {
      let result = try self.implementation.getDriver(car: car)
      return { () -> Person? in
        if let __actualValue = result {
          return __actualValue
        } else {
          return nil
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
      let result = try self.implementation.createArrayBuffer()
      return result
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func getBufferLastItem(buffer: ArrayBufferHolder) -> Double {
    do {
      let result = try self.implementation.getBufferLastItem(buffer: buffer)
      return result
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func setAllValuesTo(buffer: ArrayBufferHolder, value: Double) -> Void {
    do {
      try self.implementation.setAllValuesTo(buffer: buffer, value: value)
      return 
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func createChild() -> HybridChildSpecCxx {
    do {
      let result = try self.implementation.createChild()
      return result.createCxxBridge()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func createBase() -> HybridBaseSpecCxx {
    do {
      let result = try self.implementation.createBase()
      return result.createCxxBridge()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func createBaseActualChild() -> HybridBaseSpecCxx {
    do {
      let result = try self.implementation.createBaseActualChild()
      return result.createCxxBridge()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func bounceChild(child: HybridChildSpecCxx) -> HybridChildSpecCxx {
    do {
      let result = try self.implementation.bounceChild(child: child.getHybridChildSpec())
      return result.createCxxBridge()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func bounceBase(base: HybridBaseSpecCxx) -> HybridBaseSpecCxx {
    do {
      let result = try self.implementation.bounceBase(base: base.getHybridBaseSpec())
      return result.createCxxBridge()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func bounceChildBase(child: HybridChildSpecCxx) -> HybridBaseSpecCxx {
    do {
      let result = try self.implementation.bounceChildBase(child: child.getHybridChildSpec())
      return result.createCxxBridge()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func castBase(base: HybridBaseSpecCxx) -> HybridChildSpecCxx {
    do {
      let result = try self.implementation.castBase(base: base.getHybridBaseSpec())
      return result.createCxxBridge()
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
}
