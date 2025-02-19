#pragma once 

#include "IAbstractProductA.hpp"

#include <iostream>


class ConcreteProductA1 : public IAbstractProductA {
public:
    void usefulFunctionA() const override {
        std::cout << "The result of the product A1.\n";
    }
};