#pragma once

#include "IVisitor.hpp"

#include <iostream>

class ConcreteComponentA;

class ConcreteVisitorA : public IVisitor {
public:
    void visit(ConcreteComponentA* p_comp_a) override;

    // void visit(ConcreteComponentB* p_comp_b) override {
    //     std::cout << p_comp_b->exclusiveMethodOfConcreteComponentB() 
    //                 << " ConcreteVisitorA" << '\n';
    // }
};