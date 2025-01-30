#pragma once 

#include "Flyweight.hpp"

#include <unordered_map>

class FlyweightFactory {
public:
    Flyweight* getFlyweight(char shared_state){

        // Check if the same Flyweight instance doesn't exist
        if (m_flyweights.find(shared_state) == m_flyweights.end()) {
            m_flyweights[shared_state] = new Flyweight(shared_state);
            std::cout << "New shared state instance created: " << shared_state << '\n';
        }
        else {
            std::cout << "Shared state instance exist: " << shared_state << '\n';
        }

        return m_flyweights[shared_state];
    }

private:
    std::unordered_map<char, Flyweight*> m_flyweights;

};
