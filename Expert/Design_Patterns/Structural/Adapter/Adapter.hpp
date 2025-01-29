#pragma once

#include "IClient.hpp"
#include "Service.hpp"

#include <string>
#include <algorithm>

class Adapter : public IClient, public Service {
public:
  Adapter() {}
  std::string Request() const override {
    std::string to_reverse = SpecificRequest();
    std::reverse(to_reverse.begin(), to_reverse.end());
    return "Adapter: (TRANSLATED) " + to_reverse;
  }
};
