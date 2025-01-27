#pragma once

#include "IMediator.hpp"
#include "ComponentBase.hpp"

#include <iostream>

class ComponentA : public ComponentBase {
public:
    void operationA(void){
        std::cout << "ComponentA::operationA" << '\n';
    }

    void operationB(void){
        std::cout << "ComponentA::operationB" << '\n';
    }

};