#pragma once 

#include "Subsystem.hpp"

#include <iostream>
#include <memory>

class Facade {
public:
    Facade(std::unique_ptr<Subsystem> up_sub = nullptr)
        : m_up_sub{ up_sub ? std::move(up_sub) : std::make_unique<Subsystem>() }
    {}

    void subsystemOperation(void) {
        m_up_sub->complexOperationA();
        m_up_sub->complexOperationB();
    }

private:
    std::unique_ptr<Subsystem> m_up_sub;

};
