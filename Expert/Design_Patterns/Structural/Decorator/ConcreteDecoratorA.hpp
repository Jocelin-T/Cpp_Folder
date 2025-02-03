#pragma once 

#include "ADecorator.hpp"
#include "IComponent.hpp"

#include <iostream>

class ConcreteDecoratorA : public ADecorator {
public:
    // Pass the IComposent to the Abstract Class ADecorator
    // It's required because ADecorator need a parameter (no default constructor)
    ConcreteDecoratorA(IComponent* p_comp)
        : ADecorator{ p_comp }
    {}

    void execute(void) override {
        extra();
        m_p_component->execute();
    }

    void extra(void) {
        std::cout << "Overrided execute in ConcreteDecoratorA\n";
    }
};