///
/// JHybridImageFactorySpec.cpp
/// Tue Aug 20 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "JHybridImageFactorySpec.hpp"

// Forward declaration of `HybridImageSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridImageSpec; }

#include <memory>
#include "HybridImageSpec.hpp"
#include "JHybridImageSpec.hpp"
#include <NitroModules/JNISharedPtr.hpp>
#include <string>

namespace margelo::nitro::image {

  jni::local_ref<JHybridImageFactorySpec::jhybriddata> JHybridImageFactorySpec::initHybrid(jni::alias_ref<jhybridobject> jThis) {
    return makeCxxInstance(jThis);
  }

  void JHybridImageFactorySpec::registerNatives() {
    registerHybrid({
      makeNativeMethod("initHybrid", JHybridImageFactorySpec::initHybrid),
    });
  }

  size_t JHybridImageFactorySpec::getExternalMemorySize() noexcept {
    static const auto method = _javaPart->getClass()->getMethod<jlong()>("getMemorySize");
    return method(_javaPart);
  }

  // Properties
  

  // Methods
  std::shared_ptr<margelo::nitro::image::HybridImageSpec> JHybridImageFactorySpec::loadImageFromFile(const std::string& path) {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JHybridImageSpec::javaobject>(jni::alias_ref<jni::JString> /* path */)>("loadImageFromFile");
    auto result = method(_javaPart, jni::make_jstring(path));
    return JNISharedPtr::make_shared_from_jni<JHybridImageSpec>(jni::make_global(result));
  }
  std::shared_ptr<margelo::nitro::image::HybridImageSpec> JHybridImageFactorySpec::loadImageFromURL(const std::string& path) {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JHybridImageSpec::javaobject>(jni::alias_ref<jni::JString> /* path */)>("loadImageFromURL");
    auto result = method(_javaPart, jni::make_jstring(path));
    return JNISharedPtr::make_shared_from_jni<JHybridImageSpec>(jni::make_global(result));
  }
  std::shared_ptr<margelo::nitro::image::HybridImageSpec> JHybridImageFactorySpec::loadImageFromSystemName(const std::string& path) {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JHybridImageSpec::javaobject>(jni::alias_ref<jni::JString> /* path */)>("loadImageFromSystemName");
    auto result = method(_javaPart, jni::make_jstring(path));
    return JNISharedPtr::make_shared_from_jni<JHybridImageSpec>(jni::make_global(result));
  }
  std::shared_ptr<margelo::nitro::image::HybridImageSpec> JHybridImageFactorySpec::bounceBack(const std::shared_ptr<margelo::nitro::image::HybridImageSpec>& image) {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JHybridImageSpec::javaobject>(jni::alias_ref<JHybridImageSpec::javaobject> /* image */)>("bounceBack");
    auto result = method(_javaPart, std::static_pointer_cast<JHybridImageSpec>(image)->getJavaPart());
    return JNISharedPtr::make_shared_from_jni<JHybridImageSpec>(jni::make_global(result));
  }

} // namespace margelo::nitro::image
