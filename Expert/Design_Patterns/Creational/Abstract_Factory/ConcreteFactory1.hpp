#pragma once

#include "IAbstractFactory.hpp"
#include "ConcreteProductA1.hpp"
#include "ConcreteProductB1.hpp"


class ConcreteFactory1 : public IAbstractFactory {
public:
    IAbstractProductA* createProductA() const override {
        return new ConcreteProductA1();
    }

    IAbstractProductB* createProductB() const override {
        return new ConcreteProductB1();
    }
};