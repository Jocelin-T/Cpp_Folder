#pragma once

#include "IProduct.hpp"

#include <iostream>

class ConcreteProductA : public IProduct {
public:
    void doStuff(void) override {
        std::cout << "ConcreteProductA does stuff\n";
    }
};