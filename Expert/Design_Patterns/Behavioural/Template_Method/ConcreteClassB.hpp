#pragma once

#include "AbstractClass.hpp"

#include <iostream>

// ConcreteClassA implements the primitive operations who are required and the hook who is optional.
class ConcreteClassB : public AbstractClass {
protected:
    void primitiveOperation1() override {
        std::cout << "ConcreteClassB primitiveOperation1\n";
    }

    void primitiveOperation2() override {
        std::cout << "ConcreteClassB primitiveOperation2\n";
    }

    void hook() override {
        std::cout << "ConcreteClassB hook\n";
    }
};