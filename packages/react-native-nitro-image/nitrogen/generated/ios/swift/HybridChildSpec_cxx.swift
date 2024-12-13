///
/// HybridChildSpec_cxx.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A class implementation that bridges HybridChildSpec over to C++.
 * In C++, we cannot use Swift protocols - so we need to wrap it in a class to make it strongly defined.
 *
 * Also, some Swift types need to be bridged with special handling:
 * - Enums need to be wrapped in Structs, otherwise they cannot be accessed bi-directionally (Swift bug: https://github.com/swiftlang/swift/issues/75330)
 * - Other HybridObjects need to be wrapped/unwrapped from the Swift TCxx wrapper
 * - Throwing methods need to be wrapped with a Result<T, Error> type, as exceptions cannot be propagated to C++
 */
public class HybridChildSpec_cxx : HybridBaseSpec_cxx {
  /**
   * The Swift <> C++ bridge's namespace (`margelo::nitro::image::bridge::swift`)
   * from `NitroImage-Swift-Cxx-Bridge.hpp`.
   * This contains specialized C++ templates, and C++ helper functions that can be accessed from Swift.
   */
  public typealias bridge = margelo.nitro.image.bridge.swift

  /**
   * Holds an instance of the `HybridChildSpec` Swift protocol.
   */
  private var __implementation: any HybridChildSpec

  /**
   * Create a new `HybridChildSpec_cxx` that wraps the given `HybridChildSpec`.
   * All properties and methods bridge to C++ types.
   */
  public init(_ implementation: some HybridChildSpec) {
    self.__implementation = implementation
    super.init(implementation)
  }

  /**
   * Get the actual `HybridChildSpec` instance this class wraps.
   */
  @inline(__always)
  public func getHybridChildSpec() -> any HybridChildSpec {
    return __implementation
  }

  /**
   * Casts this instance to a retained unsafe raw pointer.
   * This acquires one additional strong reference on the object!
   */
  public override func toUnsafe() -> UnsafeMutableRawPointer {
    return Unmanaged.passRetained(self).toOpaque()
  }

  /**
   * Casts an unsafe pointer to a `HybridChildSpec_cxx`.
   * The pointer has to be a retained opaque `Unmanaged<HybridChildSpec_cxx>`.
   * This removes one strong reference from the object!
   */
  public override class func fromUnsafe(_ pointer: UnsafeMutableRawPointer) -> HybridChildSpec_cxx {
    return Unmanaged<HybridChildSpec_cxx>.fromOpaque(pointer).takeRetainedValue()
  }

  /**
   * Contains a (weak) reference to the C++ HybridObject to cache it.
   */
  public override var hybridContext: margelo.nitro.HybridContext {
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
  public override var memorySize: Int {
    return self.__implementation.memorySize
  }

  // Properties
  public var childValue: Double {
    @inline(__always)
    get {
      return self.__implementation.childValue
    }
  }

  // Methods
  
}
