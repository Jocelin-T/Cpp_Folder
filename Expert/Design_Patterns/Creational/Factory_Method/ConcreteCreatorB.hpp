#pragma once

#include "ACreator.hpp"
#include "ConcreteProductB.hpp"

class ConcreteCreatorB : public ACreator {
public:
    IProduct* createProduct(void) override {
        return new ConcreteProductB();
    }
};