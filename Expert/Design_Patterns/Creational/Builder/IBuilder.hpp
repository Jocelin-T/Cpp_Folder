#pragma once

#include "Product.hpp"

#include <string>

class IBuilder {
public:
    virtual void buildStepA(const std::string& part_A) = 0;
    virtual void buildStepB(const std::string& part_B) = 0;
    virtual void buildStepC(const std::string& part_C) = 0;
    virtual Product getProduct(void) = 0;
};