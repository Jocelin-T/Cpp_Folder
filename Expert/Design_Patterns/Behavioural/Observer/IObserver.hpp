#pragma once

#include <iostream>
#include <string>

class IObserver {
public:

    virtual void update(const std::string& context) = 0;

};