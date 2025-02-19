#pragma once

#include "IPrototype.hpp"

#include <iostream>

class ConcretePrototypeB : public IPrototype {
public:
    
    ConcretePrototypeB(int field_1)
        : m_field_1{ field_1 }
    {}
    virtual ~ConcretePrototypeB() = default;
    
    virtual IPrototype* clonePrototype() const override {
        return new ConcretePrototypeB(*this);
    }

    void execute() const override {
        std::cout << "ConcretePrototypeB: " << m_field_1 << std::endl;
    }

private:
    int m_field_1{ 0 };
};