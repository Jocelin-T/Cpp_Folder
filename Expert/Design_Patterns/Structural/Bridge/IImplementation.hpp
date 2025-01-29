#pragma once

class IImplementation {
public:
    virtual ~IImplementation(void) = default;
    virtual void methodA(void) = 0;
    virtual void methodB(void) = 0;
};