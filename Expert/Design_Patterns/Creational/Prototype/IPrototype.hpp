#pragma once


class IPrototype {
public:
    virtual ~IPrototype() = default;
    virtual IPrototype* clonePrototype() const = 0;
    virtual void execute() const = 0;
};