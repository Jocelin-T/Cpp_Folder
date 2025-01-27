#pragma once

#include "IMediator.hpp"

#include <iostream>
#include <string>

class IMediator;

class AComponent {
public:
    virtual ~AComponent(void) {
        std::cout << "AComponent deleted\n";
    }

    virtual void setMediator(IMediator* p_mediator) {
        m_p_mediator = p_mediator;
    }

    virtual void notifyMediator(const std::string& message) = 0;
    virtual void operationComponent(void) = 0;

protected:
    IMediator* m_p_mediator{ nullptr };

};