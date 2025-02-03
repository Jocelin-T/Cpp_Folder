#pragma once 

#include "IComponent.hpp"

#include <iostream>

class ConcreteComponentA : public IComponent {
public:
    void execute(void) override {
        std::cout << "Execute from ConcreteComponentA\n";
    }
};