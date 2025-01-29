#pragma once

#include "IImplementation.hpp"

class Abstraction {
public:
    Abstraction(IImplementation* p_imp) {
        m_p_implementation = p_imp;
    }

    void setImplementation(IImplementation* p_imp) {
        m_p_implementation = p_imp;
    }

    void featureA(void) {
        m_p_implementation->methodA();
    }

    void featureB(void) {
        m_p_implementation->methodB();
    }

private:
    IImplementation* m_p_implementation{ nullptr };
};