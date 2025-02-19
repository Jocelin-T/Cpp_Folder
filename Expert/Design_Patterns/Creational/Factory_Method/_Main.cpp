#include "ConcreteCreatorA.hpp"
#include "ConcreteCreatorB.hpp"

#include <iostream>

/* #################################### Factory Method - Creational ####################################
* Notes:   Factory Method is a creational design pattern that provides an interface for creating objects 
*           in a Base Class, but allows Derived Classes to alter the type of objects that will be created.
*/

int main(){

    ConcreteCreatorA creatorA;
    ConcreteCreatorB creatorB;

    creatorA.someOperation();
    creatorB.someOperation();

    return 0;
}