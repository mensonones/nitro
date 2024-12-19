///
/// HybridImageSpec_cxx.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A class implementation that bridges HybridImageSpec over to C++.
 * In C++, we cannot use Swift protocols - so we need to wrap it in a class to make it strongly defined.
 *
 * Also, some Swift types need to be bridged with special handling:
 * - Enums need to be wrapped in Structs, otherwise they cannot be accessed bi-directionally (Swift bug: https://github.com/swiftlang/swift/issues/75330)
 * - Other HybridObjects need to be wrapped/unwrapped from the Swift TCxx wrapper
 * - Throwing methods need to be wrapped with a Result<T, Error> type, as exceptions cannot be propagated to C++
 */
public class HybridImageSpec_cxx {
  /**
   * The Swift <> C++ bridge's namespace (`margelo::nitro::image::bridge::swift`)
   * from `NitroImage-Swift-Cxx-Bridge.hpp`.
   * This contains specialized C++ templates, and C++ helper functions that can be accessed from Swift.
   */
  public typealias bridge = margelo.nitro.image.bridge.swift

  /**
   * Holds an instance of the `HybridImageSpec` Swift protocol.
   */
  private var __implementation: any HybridImageSpec

  /**
   * Holds a weak pointer to the C++ class that wraps the Swift class.
   */
  private var __cxxPart: bridge.std__weak_ptr_margelo__nitro__image__HybridImageSpec_

  /**
   * Create a new `HybridImageSpec_cxx` that wraps the given `HybridImageSpec`.
   * All properties and methods bridge to C++ types.
   */
  public init(_ implementation: any HybridImageSpec) {
    self.__implementation = implementation
    self.__cxxPart = .init()
    /* no base class */
  }

  /**
   * Get the actual `HybridImageSpec` instance this class wraps.
   */
  @inline(__always)
  public func getHybridImageSpec() -> any HybridImageSpec {
    return __implementation
  }

  /**
   * Casts this instance to a retained unsafe raw pointer.
   * This acquires one additional strong reference on the object!
   */
  public func toUnsafe() -> UnsafeMutableRawPointer {
    return Unmanaged.passRetained(self).toOpaque()
  }

  /**
   * Casts an unsafe pointer to a `HybridImageSpec_cxx`.
   * The pointer has to be a retained opaque `Unmanaged<HybridImageSpec_cxx>`.
   * This removes one strong reference from the object!
   */
  public class func fromUnsafe(_ pointer: UnsafeMutableRawPointer) -> HybridImageSpec_cxx {
    return Unmanaged<HybridImageSpec_cxx>.fromOpaque(pointer).takeRetainedValue()
  }

  /**
   * Gets (or creates) the C++ part of this Hybrid Object.
   * The C++ part is a `std::shared_ptr<margelo::nitro::image::HybridImageSpec>`.
   */
  public func getCxxPart() -> bridge.std__shared_ptr_margelo__nitro__image__HybridImageSpec_ {
    let cachedCxxPart = self.__cxxPart.lock()
    if cachedCxxPart.__convertToBool() {
      return cachedCxxPart
    } else {
      let newCxxPart = bridge.create_std__shared_ptr_margelo__nitro__image__HybridImageSpec_(self.toUnsafe())
      __cxxPart = bridge.weakify_std__shared_ptr_margelo__nitro__image__HybridImageSpec_(newCxxPart)
      return newCxxPart
    }
  }

  

  /**
   * Get the memory size of the Swift class (plus size of any other allocations)
   * so the JS VM can properly track it and garbage-collect the JS object if needed.
   */
  @inline(__always)
  public var memorySize: Int {
    return MemoryHelper.getSizeOf(self.__implementation) + self.__implementation.memorySize
  }

  // Properties
  public var size: ImageSize {
    @inline(__always)
    get {
      return self.__implementation.size
    }
  }
  
  public var pixelFormat: Int32 {
    @inline(__always)
    get {
      return self.__implementation.pixelFormat.rawValue
    }
  }
  
  public var someSettableProp: Double {
    @inline(__always)
    get {
      return self.__implementation.someSettableProp
    }
    @inline(__always)
    set {
      self.__implementation.someSettableProp = newValue
    }
  }

  // Methods
  @inline(__always)
  public func toArrayBuffer(format: Int32) -> bridge.Result_double_ {
    do {
      let __result = try self.__implementation.toArrayBuffer(format: margelo.nitro.image.ImageFormat(rawValue: format)!)
      let __resultCpp = __result
      return bridge.create_Result_double_(__resultCpp)
    } catch (let __error) {
      let __exceptionPtr = __error.toCpp()
      return bridge.create_Result_double_(__exceptionPtr)
    }
  }
  
  @inline(__always)
  public func saveToFile(path: std.string, onFinished: bridge.Func_void_std__string_Wrapper) -> bridge.Result_void_ {
    do {
      try self.__implementation.saveToFile(path: String(path), onFinished: { () -> ((String) -> Void) in
        return { (__path: String) -> Void in
          onFinished.call(std.string(__path))
        }
      }())
      return bridge.create_Result_void_()
    } catch (let __error) {
      let __exceptionPtr = __error.toCpp()
      return bridge.create_Result_void_(__exceptionPtr)
    }
  }
}
