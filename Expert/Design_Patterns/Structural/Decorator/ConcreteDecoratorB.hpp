#pragma once 

#include "ADecorator.hpp"
#include "IComponent.hpp"

#include <iostream>

class ConcreteDecoratorB : public ADecorator {
public:
    // Pass the IComposent to the Abstract Class ADecorators
    // It's required because ADecorator need a parameter (no default constructor)
    ConcreteDecoratorB(IComponent* p_comp)
        : ADecorator{ p_comp }
    {}

    void extra(void) {
        std::cout << "extra in ConcreteDecoratorB\n";
    }
};