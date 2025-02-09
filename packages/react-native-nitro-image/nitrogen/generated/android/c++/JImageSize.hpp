///
/// JImageSize.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "ImageSize.hpp"



namespace margelo::nitro::image {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ struct "ImageSize" and the the Kotlin data class "ImageSize".
   */
  struct JImageSize final: public jni::JavaClass<JImageSize> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/image/ImageSize;";

  public:
    /**
     * Convert this Java/Kotlin-based struct to the C++ struct ImageSize by copying all values to C++.
     */
    [[maybe_unused]]
    ImageSize toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldWidth = clazz->getField<double>("width");
      double width = this->getFieldValue(fieldWidth);
      static const auto fieldHeight = clazz->getField<double>("height");
      double height = this->getFieldValue(fieldHeight);
      return ImageSize(
        width,
        height
      );
    }

  public:
    /**
     * Create a Java/Kotlin-based struct by copying all values from the given C++ struct to Java.
     */
    [[maybe_unused]]
    static jni::local_ref<JImageSize::javaobject> fromCpp(const ImageSize& value) {
      return newInstance(
        value.width,
        value.height
      );
    }
  };

} // namespace margelo::nitro::image
