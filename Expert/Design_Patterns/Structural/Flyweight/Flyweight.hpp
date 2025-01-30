#pragma once

#include <iostream>
#include <string>

// Object that contains only constant type 
//  (the heavy data, who doesn't change like an icon, sprite, ...)
//  is a Flyweight 
class Flyweight {
public:
    Flyweight(char shared_state)
        : m_shared_state{shared_state}
    {}

    void operation(const int unique_state) {
        std::cout << "Drawing Char '" << m_shared_state 
                    << "' at position " << unique_state 
                    << '\n';
    }

private:
    char m_shared_state{ 'x' };

};