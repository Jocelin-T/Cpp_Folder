#pragma once 

#include "IComponent.hpp"

#include <iostream>

class ADecorator {
public:
    ADecorator(IComponent* p_comp)
        : m_p_component{ p_comp }
    {}

    virtual void execute(void) {
        m_p_component->execute();
    }

protected:
    IComponent* m_p_component{ nullptr };
    
};