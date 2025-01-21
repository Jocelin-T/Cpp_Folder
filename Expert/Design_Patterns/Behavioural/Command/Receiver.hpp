#pragma once

#include <iostream>

// Class who manage the logic of the command
class Receiver {
public:
    void actionA() {
        std::cout << "Receiver action A" << '\n';
    }

    void actionB() {
        std::cout << "Receiver action B" << '\n';
    }
};