#pragma once

#include "AHandler.hpp"

#include <iostream>

class ConcreteHandlerA : public AHandler {
public:

    // Add 5 to the request
    void handle(int request) override {
        if (m_p_next_handler != nullptr) {
            request += 5;
            std::cout << "Request: " << request << '\n';
            m_p_next_handler->handle(request);
        }
        else {
            std::cout << "End of the chain\n";
        }
    }
};