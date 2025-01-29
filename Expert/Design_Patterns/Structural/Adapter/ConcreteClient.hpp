#pragma once

#include "IClient.hpp"

#include <string>

class ConcreteClient : public IClient {
public:
    virtual ~ConcreteClient() = default;
    virtual std::string Request() const {
        return "Target: The default target's behavior.";
    }
};