#pragma once

#include <string>

class IClient {
public:
    virtual ~IClient() = default;
    virtual std::string Request() const = 0;
};