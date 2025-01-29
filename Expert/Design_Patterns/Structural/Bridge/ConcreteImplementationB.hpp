#pragma once

#include "IImplementation.hpp"

#include <iostream>

class ConcreteImplementationB : public IImplementation {
public:
    void methodA(void) override {
        std::cout << "Concrete Implementation B:: method A\n";
    }

    void methodB(void) override {
        std::cout << "Concrete Implementation B:: method B\n";
    }
};