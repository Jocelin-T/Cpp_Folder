#pragma once

#include "IComponent.hpp"

#include <iostream>

// Leaf is the last element of a tree structure
class LeafC : public IComponent {
public:
    int execute(void) override {
        std::cout << "LeafC executed add 1" << '\n';
        return 1;
    }
};