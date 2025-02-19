#pragma once 

#include "IAbstractProductB.hpp"

#include <iostream>


class ConcreteProductB2 : public IAbstractProductB {
public:
    void usefulFunctionB() const override {
        std::cout << "The result of the product B2.\n";
    }
};