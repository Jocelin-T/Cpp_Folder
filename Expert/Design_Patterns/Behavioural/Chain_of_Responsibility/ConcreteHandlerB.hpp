#pragma once

#include "AHandler.hpp"

#include <iostream>

class ConcreteHandlerB : public AHandler {
private:
    // Add 10 to the request
    void operation(int& request) override {
        std::cout << "ConcreteHandlerB operation\n";
        request += 10;
        std::cout << "Request: " << request << '\n';
    }
};