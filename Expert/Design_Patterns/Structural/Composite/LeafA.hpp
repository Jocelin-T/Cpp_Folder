#pragma once

#include "IComponent.hpp"

#include <iostream>

// Leaf is the last element of a tree structure
class LeafA : public IComponent {
public:
    int execute(void) override {
        std::cout << "LeafA executed add 5" << '\n';
        return 5;
    }
};