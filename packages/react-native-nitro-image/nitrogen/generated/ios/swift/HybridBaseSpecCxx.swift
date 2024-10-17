///
/// HybridBaseSpecCxx.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * Helper class for converting instances of `HybridBaseSpecCxx` from- and to unsafe pointers.
 * This is useful to pass Swift classes to C++, without having to strongly type the C++ function signature.
 * The actual Swift type can be included in the .cpp file, without having to forward-declare anything in .hpp.
 */
public final class HybridBaseSpecCxxUnsafe {
  /**
   * Casts a HybridBaseSpecCxx instance to a retained unsafe raw pointer.
   * This acquires one additional strong reference on the object!
   */
  public static func toUnsafe(_ instance: HybridBaseSpecCxx) -> UnsafeMutableRawPointer {
    return Unmanaged.passRetained(instance).toOpaque()
  }

  /**
   * Casts an unsafe pointer to a HybridBaseSpecCxx.
   * The pointer has to be a retained opaque `Unmanaged<HybridBaseSpecCxx>`.
   * This removes one strong reference from the object!
   */
  public static func fromUnsafe(_ pointer: UnsafeMutableRawPointer) -> HybridBaseSpecCxx {
    return Unmanaged<HybridBaseSpecCxx>.fromOpaque(pointer).takeRetainedValue()
  }
}

/**
 * A class implementation that bridges HybridBaseSpec over to C++.
 * In C++, we cannot use Swift protocols - so we need to wrap it in a class to make it strongly defined.
 *
 * Also, some Swift types need to be bridged with special handling:
 * - Enums need to be wrapped in Structs, otherwise they cannot be accessed bi-directionally (Swift bug: https://github.com/swiftlang/swift/issues/75330)
 * - Other HybridObjects need to be wrapped/unwrapped from the Swift TCxx wrapper
 * - Throwing methods need to be wrapped with a Result<T, Error> type, as exceptions cannot be propagated to C++
 */
public class HybridBaseSpecCxx {
  /**
   * The Swift <> C++ bridge's namespace (`margelo::nitro::image::bridge::swift`)
   * from `NitroImage-Swift-Cxx-Bridge.hpp`.
   * This contains specialized C++ templates, and C++ helper functions that can be accessed from Swift.
   */
  public typealias bridge = margelo.nitro.image.bridge.swift

  /**
   * Holds an instance of the `HybridBaseSpec` Swift protocol.
   */
  private var __implementation: any HybridBaseSpec

  /**
   * Create a new `HybridBaseSpecCxx` that wraps the given `HybridBaseSpec`.
   * All properties and methods bridge to C++ types.
   */
  public init(_ implementation: some HybridBaseSpec) {
    self.__implementation = implementation
    /* no base class */
  }

  /**
   * Get the actual `HybridBaseSpec` instance this class wraps.
   */
  @inline(__always)
  public func getHybridBaseSpec() -> any HybridBaseSpec {
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
  public var baseValue: Double {
    @inline(__always)
    get {
      return self.__implementation.baseValue
    }
  }

  // Methods
  
}
