#pragma once

#include "ICommand.hpp"
#include "Receiver.hpp"

#include <iostream>
#include <memory>

class ConcreteCommandB : public ICommand {
public:
    ConcreteCommandB(std::shared_ptr<Receiver> sp_receiver) 
        : m_sp_receiver{ sp_receiver }
    {}

    void execute() override {
        std::cout << "ConcreteCommandB executed" << '\n';
        m_sp_receiver->actionA();
    }

private:
    std::shared_ptr<Receiver> m_sp_receiver;
};