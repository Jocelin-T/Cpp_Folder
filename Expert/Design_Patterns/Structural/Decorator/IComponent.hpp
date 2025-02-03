#pragma once 

#include <iostream>

class IComponent {
public:
    virtual void execute(void) = 0;
};