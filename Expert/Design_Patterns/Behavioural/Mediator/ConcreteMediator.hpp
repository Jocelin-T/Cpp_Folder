#pragma once

#include "IMediator.hpp"
#include "ComponentA.hpp"

#include <iostream>

class ConcreteMediator : public IMediator{
public:

    void notify(ComponentBase& sender, const std::string& message) override{
        std::cout << "ConcreteMediator::notify"  << '\n';
    }

private:
    ComponentA m_componentA;
};