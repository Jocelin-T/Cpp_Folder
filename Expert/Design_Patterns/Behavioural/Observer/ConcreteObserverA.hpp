#pragma once

#include "IObserver.hpp"

#include <iostream>
#include <string>

class ConcreteObserverA : public IObserver {
public:
    ConcreteObserverA(const std::string& name)
        : m_name(name) 
    {}

    void update(const std::string& context) override {
        std::cout << "ConcreteObserverA: " << m_name << " received message: " << context << '\n';
    }

    std::string getName() const {
        return m_name;
    }

private:
    std::string m_name;
};