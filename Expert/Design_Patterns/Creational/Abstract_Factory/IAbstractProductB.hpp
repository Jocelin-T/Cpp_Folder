#pragma once

class IAbstractProductB {
public:
    virtual ~IAbstractProductB() = default;
    virtual void usefulFunctionB() const = 0;
};