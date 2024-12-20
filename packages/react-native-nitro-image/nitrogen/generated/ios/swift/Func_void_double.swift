///
/// Func_void_double.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import NitroModules

/**
 * Represents the JS function `(value: number) => void`, wrappable as a C++ std::function.
 */
public final class Func_void_double {
  public typealias bridge = margelo.nitro.image.bridge.swift

  private let closure: ((_ value: Double) -> Void)

  public init(_ closure: @escaping ((_ value: Double) -> Void)) {
    self.closure = closure
  }

  @inline(__always)
  public func call(value: Double) -> Void {
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
   * Casts an unsafe pointer to a `Func_void_double`.
   * The pointer has to be a retained opaque `Unmanaged<Func_void_double>`.
   * This removes one strong reference from the object!
   */
  @inline(__always)
  public static func fromUnsafe(_ pointer: UnsafeMutableRawPointer) -> Func_void_double {
    return Unmanaged<Func_void_double>.fromOpaque(pointer).takeRetainedValue()
  }
}
