#pragma once

#include "AComponent.hpp"

#include <string>

class IMediator{
public:
    virtual ~IMediator(void) = default;

    virtual void notify(AComponent* p_sender, const std::string& message) = 0;
    virtual void operationComponent(AComponent* p_comp) = 0;

};