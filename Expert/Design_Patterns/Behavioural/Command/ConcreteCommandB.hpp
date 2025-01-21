#pragma once

#include "ICommand.hpp"
#include "Receiver.hpp"

#include <iostream>

class ConcreteCommandB : public ICommand {
public:
    void execute() override {
        std::cout << "ConcreteCommandB executed" << '\n';
        m_receiver.actionB();
    }

private:
    Receiver m_receiver;
};