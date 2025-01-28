#include "ConcreteComponentA.hpp"
#include "IVisitor.hpp"

#include <iostream>
#include <string>

void ConcreteComponentA::accept(IVisitor* p_visitor) {
    p_visitor->visit(this);
}

std::string ConcreteComponentA::exclusiveMethodOfConcreteComponentA(void) {
    return "A";
}