///
/// Powertrain.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

/**
 * Represents the JS union `Powertrain`, backed by a C++ enum.
 */
public typealias Powertrain = margelo.nitro.image.Powertrain

public extension Powertrain {
  /**
   * Get a Powertrain for the given String value, or
   * return `nil` if the given value was invalid/unknown.
   */
  init?(fromString string: String) {
    switch string {
      case "electric":
        self = .electric
      case "gas":
        self = .gas
      case "hybrid":
        self = .hybrid
      default:
        return nil
    }
  }

  /**
   * Get the String value this Powertrain represents.
   */
  var stringValue: String {
    switch self {
      case .electric:
        return "electric"
      case .gas:
        return "gas"
      case .hybrid:
        return "hybrid"
    }
  }
}
