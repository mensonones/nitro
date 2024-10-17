///
/// NitroImageAutolinking.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

public final class NitroImageAutolinking {
  public typealias bridge = margelo.nitro.image.bridge.swift

  /**
   * Creates an instance of a Swift class that implements `HybridImageFactorySpec`,
   * and wraps it in a Swift class that can directly interop with C++ (`HybridImageFactorySpecCxx`)
   *
   * This is generated by Nitrogen and will initialize the class specified
   * in the `"autolinking"` property of `nitro.json` (in this case, `HybridImageFactory`).
   */
  public static func createImageFactory() -> bridge.std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_ {
    let hybridObject = HybridImageFactory()
    return { () -> bridge.std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_ in
      let __cxxWrapped = HybridImageFactorySpecCxx(hybridObject)
      let __swiftReferenceId = HybridImageFactorySpecCxxReferenceHolder.put(__cxxWrapped)
      return bridge.create_std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_(__swiftReferenceId)
    }()
  }
  
  /**
   * Creates an instance of a Swift class that implements `HybridTestObjectSwiftKotlinSpec`,
   * and wraps it in a Swift class that can directly interop with C++ (`HybridTestObjectSwiftKotlinSpecCxx`)
   *
   * This is generated by Nitrogen and will initialize the class specified
   * in the `"autolinking"` property of `nitro.json` (in this case, `HybridTestObjectSwift`).
   */
  public static func createTestObjectSwiftKotlin() -> bridge.std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_ {
    let hybridObject = HybridTestObjectSwift()
    return { () -> bridge.std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_ in
      let __cxxWrapped = HybridTestObjectSwiftKotlinSpecCxx(hybridObject)
      let __swiftReferenceId = HybridTestObjectSwiftKotlinSpecCxxReferenceHolder.put(__cxxWrapped)
      return bridge.create_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_(__swiftReferenceId)
    }()
  }
  
  /**
   * Creates an instance of a Swift class that implements `HybridBaseSpec`,
   * and wraps it in a Swift class that can directly interop with C++ (`HybridBaseSpecCxx`)
   *
   * This is generated by Nitrogen and will initialize the class specified
   * in the `"autolinking"` property of `nitro.json` (in this case, `HybridBase`).
   */
  public static func createBase() -> bridge.std__shared_ptr_margelo__nitro__image__HybridBaseSpec_ {
    let hybridObject = HybridBase()
    return { () -> bridge.std__shared_ptr_margelo__nitro__image__HybridBaseSpec_ in
      let __cxxWrapped = HybridBaseSpecCxx(hybridObject)
      let __swiftReferenceId = HybridBaseSpecCxxReferenceHolder.put(__cxxWrapped)
      return bridge.create_std__shared_ptr_margelo__nitro__image__HybridBaseSpec_(__swiftReferenceId)
    }()
  }
  
  /**
   * Creates an instance of a Swift class that implements `HybridChildSpec`,
   * and wraps it in a Swift class that can directly interop with C++ (`HybridChildSpecCxx`)
   *
   * This is generated by Nitrogen and will initialize the class specified
   * in the `"autolinking"` property of `nitro.json` (in this case, `HybridChild`).
   */
  public static func createChild() -> bridge.std__shared_ptr_margelo__nitro__image__HybridChildSpec_ {
    let hybridObject = HybridChild()
    return { () -> bridge.std__shared_ptr_margelo__nitro__image__HybridChildSpec_ in
      let __cxxWrapped = HybridChildSpecCxx(hybridObject)
      let __swiftReferenceId = HybridChildSpecCxxReferenceHolder.put(__cxxWrapped)
      return bridge.create_std__shared_ptr_margelo__nitro__image__HybridChildSpec_(__swiftReferenceId)
    }()
  }
}
