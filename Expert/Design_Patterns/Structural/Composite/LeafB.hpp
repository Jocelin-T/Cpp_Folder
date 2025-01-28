#pragma once

#include "IComponent.hpp"

#include <iostream>

// Leaf is the last element of a tree structure
class LeafB : public IComponent {
public:
    int execute(void) override {
        std::cout << "LeafB executed add 10" << '\n';
        return 10;
    }
};