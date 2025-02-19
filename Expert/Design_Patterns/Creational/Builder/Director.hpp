#pragma once

#include "IBuilder.hpp"

class Director {
public:
    Director(IBuilder* p_builder) : m_p_builder(p_builder) {}

    void changeBuilder(IBuilder* p_builder) {
        m_p_builder = p_builder;
    }

    void makeProduct() {
        m_p_builder->buildStepA("A");
        m_p_builder->buildStepB("B");
        m_p_builder->buildStepC("C");
    }

private:
    IBuilder* m_p_builder{ nullptr };
};