#pragma once 

#include "IAbstractProductB.hpp"

#include <iostream>


class ConcreteProductB1 : public IAbstractProductB {
public:
    void usefulFunctionB() const override {
        std::cout << "The result of the product B1.\n";
    }
};