#pragma once

#include <iostream>
#include <string>

class ISubscriber {
public:

    void update(const std::string& message) {
        std::cout << "Received message: " << message << std::endl;
    }

};