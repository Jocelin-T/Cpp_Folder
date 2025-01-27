#pragma once

#include "IMediator.hpp"

#include <iostream>

class ComponentBase {
public:
    ComponentBase(IMediator* p_mediator) 
        : m_p_mediator(p_mediator)
    {}

    void setMediator(IMediator* p_mediator){
        m_p_mediator = p_mediator;
    }

protected:
    IMediator* m_p_mediator{ nullptr };
};