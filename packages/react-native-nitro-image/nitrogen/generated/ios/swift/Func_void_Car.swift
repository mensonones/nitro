///
/// Func_void_Car.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

import NitroModules

/**
 * Wraps a Swift `((_ value: Car) -> Void)` as a class.
 * This class can be used from C++, e.g. to wrap the Swift closure as a `std::function`.
 */
public final class Func_void_Car {
  public typealias bridge = margelo.nitro.image.bridge.swift

  private let closure: ((_ value: Car) -> Void)

  public init(_ closure: @escaping ((_ value: Car) -> Void)) {
    self.closure = closure
  }

  @inline(__always)
  public func call(value: Car) -> Void {
    self.closure(value)
  }

  /**
   * Casts this instance to a retained unsafe raw pointer.
   * This acquires one additional strong reference on the object!
   */
  @inline(__always)
  public func toUnsafe() -> UnsafeMutableRawPointer {
    return Unmanaged.passRetained(self).toOpaque()
  }

  /**
   * Casts an unsafe pointer to a `Func_void_Car`.
   * The pointer has to be a retained opaque `Unmanaged<Func_void_Car>`.
   * This removes one strong reference from the object!
   */
  @inline(__always)
  public static func fromUnsafe(_ pointer: UnsafeMutableRawPointer) -> Func_void_Car {
    return Unmanaged<Func_void_Car>.fromOpaque(pointer).takeRetainedValue()
  }
}
