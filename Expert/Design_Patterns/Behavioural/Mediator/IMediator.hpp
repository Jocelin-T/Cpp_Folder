#pragma once

#include "ComponentBase.hpp"

#include <iostream>
#include <string>

class IMediator{
public:

    virtual void notify(ComponentBase& sender, const std::string& message) = 0;

};