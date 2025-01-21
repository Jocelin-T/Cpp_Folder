#pragma once

#include "ICommand.hpp"

#include <iostream>
#include <memory>

class Invoker {
public:
    Invoker() = default;
    Invoker(std::unique_ptr<ICommand> up_command) 
        : m_up_command{ std::move(up_command) }
    {}
    // ~Invoker() {
    //     delete m_up_command;
    // }

    void setCommand(std::unique_ptr<ICommand> up_command) {
        m_up_command = std::move(up_command);
    }

    void executeCommand() {
        m_up_command->execute();
    }

private:
    std::unique_ptr<ICommand> m_up_command{ nullptr };
};