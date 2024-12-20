///
/// Func_void_std__optional_double_.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import NitroModules

/**
 * Represents the JS function `(maybe: optional) => void`, wrappable as a C++ std::function.
 */
public final class Func_void_std__optional_double_ {
  public typealias bridge = margelo.nitro.image.bridge.swift

  private let closure: ((_ maybe: Double?) -> Void)

  public init(_ closure: @escaping ((_ maybe: Double?) -> Void)) {
    self.closure = closure
  }

  public func call(maybe: bridge.std__optional_double_) -> Void {
    self.closure(maybe.value)
  }

  /**
   * Casts this instance to a retained unsafe raw pointer.
   * This acquires one additional strong reference on the object!
   */
  public func toUnsafe() -> UnsafeMutableRawPointer {
    return Unmanaged.passRetained(self).toOpaque()
  }

  /**
   * Casts an unsafe pointer to a `Func_void_std__optional_double_`.
   * The pointer has to be a retained opaque `Unmanaged<Func_void_std__optional_double_>`.
   * This removes one strong reference from the object!
   */
  public static func fromUnsafe(_ pointer: UnsafeMutableRawPointer) -> Func_void_std__optional_double_ {
    return Unmanaged<Func_void_std__optional_double_>.fromOpaque(pointer).takeRetainedValue()
  }
}
