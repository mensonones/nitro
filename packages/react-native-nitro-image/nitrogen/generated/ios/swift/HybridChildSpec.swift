///
/// HybridChildSpec.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/// See ``HybridChildSpec``
public protocol HybridChildSpec_protocol: AnyObject, HybridBaseSpec_protocol {
  // Properties
  var childValue: Double { get }

  // Methods
  
}

/// See ``HybridChildSpec``
public class HybridChildSpec_base: HybridBaseSpec_base {
  
}

/**
 * A Swift base-protocol representing the Child HybridObject.
 * Implement this protocol to create Swift-based instances of Child.
 * ```swift
 * class HybridChild : HybridChildSpec {
 *   // ...
 * }
 * ```
 */
public typealias HybridChildSpec = HybridChildSpec_protocol & HybridChildSpec_base
