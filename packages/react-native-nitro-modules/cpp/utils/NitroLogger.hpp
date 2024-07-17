//
// Created by Marc Rousavy on 05.03.24.
//

#pragma once

#include <iostream>
#include <string>

namespace margelo::nitro {

class Logger {
private:
  Logger() = delete;

public:
  template <typename... Args> static inline void log(const std::string& tag, const std::string& message, Args&&... args) {
    // TODO: Allow formatting args into message so they get printed as well.
    std::cout << "[" << tag << "] " << message << std::endl;
  }
};

} // namespace margelo::nitro
