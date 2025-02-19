#pragma once

#include <string>
#include <iostream>

class Product {
public:
    void setPartA(const std::string& part_A) {
        m_part_A = part_A;
    }

    void setPartB(const std::string& part_B) {
        m_part_B = part_B;
    }

    void setPartC(const std::string& part_C) {
        m_part_C = part_C;
    }

    void show() {
        std::cout << "Product parts: " << m_part_A << ", " << m_part_B << ", " << m_part_C << std::endl;
    }

private:
    std::string m_part_A;
    std::string m_part_B;
    std::string m_part_C;
};