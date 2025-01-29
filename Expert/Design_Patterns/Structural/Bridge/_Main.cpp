#include "Abstraction.hpp"
#include "ConcreteImplementationA.hpp"
#include "ConcreteImplementationB.hpp"

#include <iostream>

/* #################################### Bridge - Structural ####################################
* Notes:   Bridge is a structural design pattern that lets you split a large class or a set of 
*           closely related classes into two separate hierarchies (abstraction and implementation)
*           which can be developed independently of each other.
*/

int main(){

    ConcreteImplementationA imp_a;
    Abstraction abstraction(&imp_a);

    abstraction.featureA();
    abstraction.featureB();

    ConcreteImplementationB imp_b;
    abstraction.setImplementation(&imp_b);

    abstraction.featureA();
    abstraction.featureB();

    return 0;
}