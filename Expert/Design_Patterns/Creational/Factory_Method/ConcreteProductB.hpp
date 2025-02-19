#pragma once

#include "IProduct.hpp"

#include <iostream>

class ConcreteProductB : public IProduct {
public:
    void doStuff(void) override {
        std::cout << "ConcreteProductB does stuff\n";
    }
};