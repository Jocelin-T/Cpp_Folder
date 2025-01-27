#pragma once

#include "IHandler.hpp"

#include <iostream>

class AHandler : public IHandler {
public:

    void setNext(IHandler* p_handler) override {
        m_p_next_handler = p_handler;
    }

    void handle(int request) override {
        if (m_p_next_handler != nullptr) {
            operation(request);
            m_p_next_handler->handle(request);
        }
        else {
            operation(request);
            std::cout << "End of the chain\n";
        }
    }
    
protected:
    IHandler* m_p_next_handler{ nullptr };

private:
    // Does nothing, is already declared in the Interface
    //  and is define in the ConcreteHandler Classes
    void operation(int& request) override = 0;
};