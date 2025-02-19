#pragma once

#include "IPrototype.hpp"

#include <iostream>

class ConcretePrototypeA : public IPrototype {
public:
    
    ConcretePrototypeA(int field_1)
        : m_field_1{ field_1 }
    {}
    virtual ~ConcretePrototypeA() = default;
    
    virtual IPrototype* clonePrototype() const override {
        return new ConcretePrototypeA(*this);
    }

    void execute() const override {
        std::cout << "ConcretePrototypeA: " << m_field_1 << std::endl;
    }

private:
    int m_field_1{ 0 };
};