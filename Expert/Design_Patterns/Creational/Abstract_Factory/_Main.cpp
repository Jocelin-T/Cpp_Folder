#include "ConcreteFactory1.hpp"
#include "ConcreteFactory2.hpp"

#include <iostream>

/* #################################### Abstract Factory - Creational ####################################
* Notes:   Abstract Factory is a creational design pattern that lets you produce families of related objects
*           without specifying their concrete classes.
*/

int main(){

    ConcreteFactory1* factory1 = new ConcreteFactory1();
    ConcreteFactory2* factory2 = new ConcreteFactory2();

    IAbstractProductA* productA1 = factory1->createProductA();
    IAbstractProductB* productB1 = factory1->createProductB();

    IAbstractProductA* productA2 = factory2->createProductA();
    IAbstractProductB* productB2 = factory2->createProductB();

    productA1->usefulFunctionA();
    productB1->usefulFunctionB();
    productA2->usefulFunctionA();
    productB2->usefulFunctionB();

    return 0;
}