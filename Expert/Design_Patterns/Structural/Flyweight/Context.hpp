#pragma once 

#include "Flyweight.hpp"
#include "FlyweightFactory.hpp"

#include <string>

class Context {
public:
    Context(char shared_state, int unique_state) 
        : m_unique_state{ unique_state}
    {
        m_p_flyweight = facto.getFlyweight(shared_state);
    }

    void addFlyweight(char shared_state, int unique_state) {
        m_unique_state = unique_state;
        m_p_flyweight = facto.getFlyweight(shared_state);
    }

    void operation(void) {
        m_p_flyweight->operation(m_unique_state);
    }

private:
    FlyweightFactory facto;
    Flyweight* m_p_flyweight;
    int m_unique_state{ 0 };
    
};