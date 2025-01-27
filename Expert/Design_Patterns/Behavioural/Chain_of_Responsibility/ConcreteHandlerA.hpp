#pragma once

#include "AHandler.hpp"

#include <iostream>

class ConcreteHandlerA : public AHandler {
private:
    // Add 5 to the request
    void operation(int& request) override {
        std::cout << "ConcreteHandlerA operation\n";
        request += 5;
        std::cout << "Request: " << request << '\n';
    }
};