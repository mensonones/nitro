///
/// Func_void_Car.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import NitroModules

/**
 * Represents the JS function `(value: struct) => void`, wrappable as a C++ std::function.
 */
public final class Func_void_Car {
  public typealias bridge = margelo.nitro.image.bridge.swift

  private let closure: ((_ value: Car) -> Void)

  public init(_ closure: @escaping ((_ value: Car) -> Void)) {
    self.closure = closure
  }

  public func call(value: Car) -> Void {
    let __result: Void = self.closure(value)
    return 
  }

  /**
   * Casts this instance to a retained unsafe raw pointer.
   * This acquires one additional strong reference on the object!
   */
  public func toUnsafe() -> UnsafeMutableRawPointer {
    return Unmanaged.passRetained(self).toOpaque()
  }

  /**
   * Casts an unsafe pointer to a `Func_void_Car`.
   * The pointer has to be a retained opaque `Unmanaged<Func_void_Car>`.
   * This removes one strong reference from the object!
   */
  public static func fromUnsafe(_ pointer: UnsafeMutableRawPointer) -> Func_void_Car {
    return Unmanaged<Func_void_Car>.fromOpaque(pointer).takeRetainedValue()
  }
}