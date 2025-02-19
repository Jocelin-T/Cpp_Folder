#pragma once

class IAbstractProductA {
public:
    virtual ~IAbstractProductA() = default;
    virtual void usefulFunctionA() const = 0;
};