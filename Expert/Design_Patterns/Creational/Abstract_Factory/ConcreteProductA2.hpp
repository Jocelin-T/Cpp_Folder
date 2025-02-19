#pragma once 

#include "IAbstractProductA.hpp"

#include <iostream>


class ConcreteProductA2 : public IAbstractProductA {
public:
    void usefulFunctionA() const override {
        std::cout << "The result of the product A2.\n";
    }
};