#pragma once

#include "ICommand.hpp"
#include "Receiver.hpp"

#include <iostream>
#include <memory>

class ConcreteCommandA : public ICommand {
public:
    ConcreteCommandA(Receiver sp_receiver) 
        : m_sp_receiver{ sp_receiver }
    {}

    void execute() override {
        std::cout << "ConcreteCommandA executed" << '\n';
        m_sp_receiver.actionA();
    }

private:
    std::shared_ptr<Receiver> m_sp_receiver;
    // Receiver m_receiver;
};