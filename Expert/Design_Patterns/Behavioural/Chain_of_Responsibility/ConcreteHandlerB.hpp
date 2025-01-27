#pragma once

#include "AHandler.hpp"

#include <iostream>

class ConcreteHandlerB : public AHandler {
public:

    // Add 10 to the request
    void handle(int request) override {
        if (m_p_next_handler != nullptr) {
            request += 10;
            std::cout << "Request: " << request << '\n';
            m_p_next_handler->handle(request);
        }
        else {
            std::cout << "End of the chain\n";
        }
    }
};