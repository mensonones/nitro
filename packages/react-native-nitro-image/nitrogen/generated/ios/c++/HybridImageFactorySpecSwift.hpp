///
/// HybridImageFactorySpecSwift.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridImageFactorySpec.hpp"

// Forward declaration of `HybridImageFactorySpecCxx` to properly resolve imports.
namespace NitroImage { class HybridImageFactorySpecCxx; }

// Forward declaration of `HybridImageSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridImageSpec; }
// Forward declaration of `HybridImageSpecSwift` to properly resolve imports.
namespace margelo::nitro::image { class HybridImageSpecSwift; }

#include <memory>
#include "HybridImageSpec.hpp"
#include "HybridImageSpecSwift.hpp"
#include <string>

#if __has_include(<NitroModules/HybridContext.hpp>)
#include <NitroModules/HybridContext.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

#include "NitroImage-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::image {

  /**
   * The C++ part of HybridImageFactorySpecCxx.swift.
   *
   * HybridImageFactorySpecSwift (C++) accesses HybridImageFactorySpecCxx (Swift), and might
   * contain some additional bridging code for C++ <> Swift interop.
   *
   * Since this obviously introduces an overhead, I hope at some point in
   * the future, HybridImageFactorySpecCxx can directly inherit from the C++ class HybridImageFactorySpec
   * to simplify the whole structure and memory management.
   */
  class HybridImageFactorySpecSwift: public virtual HybridImageFactorySpec {
  public:
    // Constructor from a Swift instance
    explicit HybridImageFactorySpecSwift(const NitroImage::HybridImageFactorySpecCxx& swiftPart):
      HybridObject(HybridImageFactorySpec::TAG),
      _swiftPart(swiftPart) { }

  public:
    // Get the Swift part
    inline NitroImage::HybridImageFactorySpecCxx getSwiftPart() noexcept { return _swiftPart; }

  public:
    // Get memory pressure
    inline size_t getExternalMemorySize() noexcept override {
      return _swiftPart.getMemorySize();
    }

  public:
    // Properties
    

  public:
    // Methods
    inline std::shared_ptr<margelo::nitro::image::HybridImageSpec> loadImageFromFile(const std::string& path) override {
      auto __result = _swiftPart.loadImageFromFile(path);
      return HybridContext::getOrCreate<HybridImageSpecSwift>(__result);
    }
    inline std::shared_ptr<margelo::nitro::image::HybridImageSpec> loadImageFromURL(const std::string& path) override {
      auto __result = _swiftPart.loadImageFromURL(path);
      return HybridContext::getOrCreate<HybridImageSpecSwift>(__result);
    }
    inline std::shared_ptr<margelo::nitro::image::HybridImageSpec> loadImageFromSystemName(const std::string& path) override {
      auto __result = _swiftPart.loadImageFromSystemName(path);
      return HybridContext::getOrCreate<HybridImageSpecSwift>(__result);
    }
    inline std::shared_ptr<margelo::nitro::image::HybridImageSpec> bounceBack(const std::shared_ptr<margelo::nitro::image::HybridImageSpec>& image) override {
      auto __result = _swiftPart.bounceBack(image);
      return HybridContext::getOrCreate<HybridImageSpecSwift>(__result);
    }

  private:
    NitroImage::HybridImageFactorySpecCxx _swiftPart;
  };

} // namespace margelo::nitro::image
