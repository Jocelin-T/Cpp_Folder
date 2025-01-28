#pragma once

class ConcreteComponentA;
// class ConcreteComponentB;

class IVisitor {
public:
    virtual ~IVisitor() = default;
    virtual void visit(ConcreteComponentA* p_comp_a) = 0;
    // virtual void visit(ConcreteComponentB* p_comp_b) = 0;
};