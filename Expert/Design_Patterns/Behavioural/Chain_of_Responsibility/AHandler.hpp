#pragma once

#include "IHandler.hpp"

#include <iostream>

class AHandler : public IHandler {
public:

    void setNext(IHandler* p_handler) {
        m_p_next_handler = p_handler;
    }

    virtual void handle(int request) {

        if (m_p_next_handler != nullptr) {
            m_p_next_handler->handle(request);
        }
        else {
            std::cout << "End of the chain\n";
        }
    }


private:
    IHandler* m_p_next_handler{ nullptr };

};