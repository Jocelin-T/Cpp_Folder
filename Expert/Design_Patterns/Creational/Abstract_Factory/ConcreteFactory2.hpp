#pragma once

#include "IAbstractFactory.hpp"
#include "ConcreteProductA2.hpp"
#include "ConcreteProductB2.hpp"


class ConcreteFactory2 : public IAbstractFactory {
public:
    IAbstractProductA* createProductA() const override {
        return new ConcreteProductA2();
    }

    IAbstractProductB* createProductB() const override {
        return new ConcreteProductB2();
    }
};