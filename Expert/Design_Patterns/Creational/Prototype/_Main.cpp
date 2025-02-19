#include "ConcretePrototypeA.hpp"
#include "ConcretePrototypeB.hpp"

#include <iostream>

/* #################################### Prototype - Creational ####################################
* Notes:   Prototype is a creational design pattern that lets you copy existing objects without 
*           making your code dependent on their classes.
*/

int main(){

    ConcretePrototypeA prototypeA{ 1 };
    ConcretePrototypeB prototypeB{ 2 };

    IPrototype* cloneA = prototypeA.clonePrototype();
    IPrototype* cloneB = prototypeB.clonePrototype();

    cloneA->execute();
    cloneB->execute();

    return 0;
}