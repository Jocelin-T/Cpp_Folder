#pragma once

#include "AbstractClass.hpp"

#include <iostream>

// ConcreteClassA implements the primitive operations who are required.
class ConcreteClassA : public AbstractClass {
protected:
    void primitiveOperation1() override {
        std::cout << "ConcreteClassA primitiveOperation1\n";
    }

    void primitiveOperation2() override {
        std::cout << "ConcreteClassA primitiveOperation2\n";
    }
};