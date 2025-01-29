#pragma once

#include "IImplementation.hpp"

#include <iostream>

class ConcreteImplementationA : public IImplementation {
public:
    void methodA(void) override {
        std::cout << "Concrete Implementation A:: method A\n";
    }

    void methodB(void) override {
        std::cout << "Concrete Implementation A:: method B\n";
    }
};