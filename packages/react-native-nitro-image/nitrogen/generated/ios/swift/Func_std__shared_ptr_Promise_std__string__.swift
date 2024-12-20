///
/// Func_std__shared_ptr_Promise_std__string__.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

/**
 * Represents the JS function `() => std::shared_ptr<Promise<std::string>>`, wrappable as a C++ std::function.
 */
public final class Func_std__shared_ptr_Promise_std__string__ {
  private let closure: (() -> Promise<String>)

  public init(_ closure: @escaping (() -> Promise<String>)) {
    self.closure = closure
  }

  public func call() -> bridge.PromiseHolder_std__string_ {
    let __result: Promise<String> = self.closure()
    return { () -> bridge.PromiseHolder_std__string_ in
      let __promise = bridge.create_PromiseHolder_std__string_()
      __result
        .then({ __result in __promise.resolve(std.string(__result)) })
        .catch({ __error in __promise.reject(__error.toCpp()) })
      return __promise
    }()
  }

  /**
   * Casts this instance to a retained unsafe raw pointer.
   * This acquires one additional strong reference on the object!
   */
  public func toUnsafe() -> UnsafeMutableRawPointer {
    return Unmanaged.passRetained(self).toOpaque()
  }

  /**
   * Casts an unsafe pointer to a `Func_std__shared_ptr_Promise_std__string__`.
   * The pointer has to be a retained opaque `Unmanaged<Func_std__shared_ptr_Promise_std__string__>`.
   * This removes one strong reference from the object!
   */
  public static func fromUnsafe(_ pointer: UnsafeMutableRawPointer) -> Func_std__shared_ptr_Promise_std__string__ {
    return Unmanaged<Func_std__shared_ptr_Promise_std__string__>.fromOpaque(pointer).takeRetainedValue()
  }
}
