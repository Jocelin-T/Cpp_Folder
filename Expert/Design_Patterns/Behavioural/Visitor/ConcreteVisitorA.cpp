#include "ConcreteVisitorA.hpp"
#include "ConcreteComponentA.hpp"

#include <iostream>

void ConcreteVisitorA::visit(ConcreteComponentA* p_comp_a) {
    std::cout << p_comp_a->exclusiveMethodOfConcreteComponentA() 
                << " ConcreteVisitorA" << '\n';
}
