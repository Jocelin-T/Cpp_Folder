#pragma once

#include "IMediator.hpp"
#include "AComponent.hpp"

#include <iostream>

class ComponentB : public AComponent {
public:

    void notifyMediator(const std::string& message) override {
        std::cout << "ComponentB notify mediator: " << message << " You\n";
    }
    
    void operationComponent(void) override {
        std::cout << "ComponentB::operationComponent" << '\n';
    }

};