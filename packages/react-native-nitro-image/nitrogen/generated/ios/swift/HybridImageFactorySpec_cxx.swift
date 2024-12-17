///
/// HybridImageFactorySpec_cxx.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A class implementation that bridges HybridImageFactorySpec over to C++.
 * In C++, we cannot use Swift protocols - so we need to wrap it in a class to make it strongly defined.
 *
 * Also, some Swift types need to be bridged with special handling:
 * - Enums need to be wrapped in Structs, otherwise they cannot be accessed bi-directionally (Swift bug: https://github.com/swiftlang/swift/issues/75330)
 * - Other HybridObjects need to be wrapped/unwrapped from the Swift TCxx wrapper
 * - Throwing methods need to be wrapped with a Result<T, Error> type, as exceptions cannot be propagated to C++
 */
public class HybridImageFactorySpec_cxx {
  /**
   * The Swift <> C++ bridge's namespace (`margelo::nitro::image::bridge::swift`)
   * from `NitroImage-Swift-Cxx-Bridge.hpp`.
   * This contains specialized C++ templates, and C++ helper functions that can be accessed from Swift.
   */
  public typealias bridge = margelo.nitro.image.bridge.swift

  /**
   * Holds an instance of the `HybridImageFactorySpec` Swift protocol.
   */
  private var __implementation: any HybridImageFactorySpec

  /**
   * Create a new `HybridImageFactorySpec_cxx` that wraps the given `HybridImageFactorySpec`.
   * All properties and methods bridge to C++ types.
   */
  public init(_ implementation: any HybridImageFactorySpec) {
    self.__implementation = implementation
    /* no base class */
  }

  /**
   * Get the actual `HybridImageFactorySpec` instance this class wraps.
   */
  @inline(__always)
  public func getHybridImageFactorySpec() -> any HybridImageFactorySpec {
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
   * Casts an unsafe pointer to a `HybridImageFactorySpec_cxx`.
   * The pointer has to be a retained opaque `Unmanaged<HybridImageFactorySpec_cxx>`.
   * This removes one strong reference from the object!
   */
  public class func fromUnsafe(_ pointer: UnsafeMutableRawPointer) -> HybridImageFactorySpec_cxx {
    return Unmanaged<HybridImageFactorySpec_cxx>.fromOpaque(pointer).takeRetainedValue()
  }

  /**
   * Gets (or creates) the C++ part of this Hybrid Object.
   * The C++ part is a `std::shared_ptr<margelo::nitro::image::HybridImageFactorySpec>`.
   */
  public func getCxxPart() -> bridge.std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_ {
    return bridge.create_std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_(self.toUnsafe())
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
  

  // Methods
  @inline(__always)
  public func loadImageFromFile(path: std.string) -> bridge.std__shared_ptr_margelo__nitro__image__HybridImageSpec_ {
    do {
      let __result = try self.__implementation.loadImageFromFile(path: String(path))
      return { () -> bridge.std__shared_ptr_margelo__nitro__image__HybridImageSpec_ in
        let __cxxWrapped = __result.getCxxWrapper()
        return __cxxWrapped.getCxxPart()
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func loadImageFromURL(path: std.string) -> bridge.std__shared_ptr_margelo__nitro__image__HybridImageSpec_ {
    do {
      let __result = try self.__implementation.loadImageFromURL(path: String(path))
      return { () -> bridge.std__shared_ptr_margelo__nitro__image__HybridImageSpec_ in
        let __cxxWrapped = __result.getCxxWrapper()
        return __cxxWrapped.getCxxPart()
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func loadImageFromSystemName(path: std.string) -> bridge.std__shared_ptr_margelo__nitro__image__HybridImageSpec_ {
    do {
      let __result = try self.__implementation.loadImageFromSystemName(path: String(path))
      return { () -> bridge.std__shared_ptr_margelo__nitro__image__HybridImageSpec_ in
        let __cxxWrapped = __result.getCxxWrapper()
        return __cxxWrapped.getCxxPart()
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func bounceBack(image: bridge.std__shared_ptr_margelo__nitro__image__HybridImageSpec_) -> bridge.std__shared_ptr_margelo__nitro__image__HybridImageSpec_ {
    do {
      let __result = try self.__implementation.bounceBack(image: { () -> HybridImageSpec in
        let __unsafePointer = bridge.get_std__shared_ptr_margelo__nitro__image__HybridImageSpec_(image)
        let __instance = HybridImageSpec_cxx.fromUnsafe(__unsafePointer)
        return __instance.getHybridImageSpec()
      }())
      return { () -> bridge.std__shared_ptr_margelo__nitro__image__HybridImageSpec_ in
        let __cxxWrapped = __result.getCxxWrapper()
        return __cxxWrapped.getCxxPart()
      }()
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
}
