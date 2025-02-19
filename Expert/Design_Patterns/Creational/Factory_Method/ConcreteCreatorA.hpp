#pragma once

#include "ACreator.hpp"
#include "ConcreteProductA.hpp"

class ConcreteCreatorA : public ACreator {
public:
    IProduct* createProduct(void) override {
        return new ConcreteProductA();
    }
};