#pragma once

#include "IAbstractProductA.hpp"
#include "IAbstractProductB.hpp"


class IAbstractFactory {
public:
    virtual ~IAbstractFactory() = default;
    virtual IAbstractProductA* createProductA() const = 0;
    virtual IAbstractProductB* createProductB() const = 0;
};