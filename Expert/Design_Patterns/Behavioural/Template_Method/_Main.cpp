#include "AbstractClass.hpp"
#include "ConcreteClassA.hpp"
#include "ConcreteClassB.hpp"

#include <iostream>

/* #################################### Template Method - Behavioural ####################################
* Notes:   The template method is a behavioural design pattern that defines the program skeleton
*            of an algorithm in the base class but lets derived classes override specific steps
*            of the algorithm without changing its structure.
*/

int main(){

    ConcreteClassA concreteClassA;
    concreteClassA.templateMethod();
    std::cout << '\n';

    ConcreteClassB concreteClassB;
    concreteClassB.templateMethod();

    return 0;
}