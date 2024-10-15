///
/// HybridBaseSpecSwift.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridBaseSpecSwift.hpp"

// Include Swift types (especially the HybridBaseSpecSwift Swift class)
#include "NitroImage-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::image {

HybridBaseSpecSwift::HybridBaseSpecSwift(const NitroImage::HybridBaseSpecCxx& swiftPart):
  HybridObject(HybridBaseSpec::TAG),
  _swiftPart(std::make_unique<NitroImage::HybridBaseSpecCxx>(swiftPart)) { }

NitroImage::HybridBaseSpecCxx HybridBaseSpecSwift::getSwiftPart() noexcept {
  return *_swiftPart;
}

size_t HybridBaseSpecSwift::getExternalMemorySize() noexcept {
  return _swiftPart->getMemorySize();
}

// Properties
double HybridBaseSpecSwift::getBaseValue() noexcept {
  return _swiftPart->getBaseValue();
}

// Methods


} // namespace margelo::nitro::image
