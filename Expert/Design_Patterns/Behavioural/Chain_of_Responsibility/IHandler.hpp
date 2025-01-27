#pragma once

#include <iostream>

class IHandler {
public:
    virtual ~IHandler() = default;
    virtual void setNext(IHandler* p_handler) = 0;
    virtual void handle(int request) = 0;
    virtual void operation(int& request) = 0;
};