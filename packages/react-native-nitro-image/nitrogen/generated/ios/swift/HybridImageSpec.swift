///
/// HybridImageSpec.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A Swift protocol representing the Image HybridObject.
 * Implement this protocol to create Swift-based instances of Image.
 */
public protocol HybridImageSpec_protocol: AnyObject {
  // Properties
  var size: ImageSize { get }
  var pixelFormat: PixelFormat { get }
  var someSettableProp: Double { get set }

  // Methods
  func toArrayBuffer(format: ImageFormat) throws -> Double
  func saveToFile(path: String, onFinished: @escaping ((_ path: String) -> Void)) throws -> Void
}

public class HybridImageSpec_base: HybridObjectSpec {
  public var hybridContext = margelo.nitro.HybridContext()
  public var memorySize: Int { return 0 }
}

public typealias HybridImageSpec = HybridImageSpec_protocol & HybridImageSpec_base
