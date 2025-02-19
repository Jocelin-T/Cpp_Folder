#include "Director.hpp"
#include "ConcreteBuilderA.hpp"
#include "ConcreteBuilderB.hpp"

#include <iostream>

/* #################################### Builder - Creational ####################################
* Notes:   Builder is a creational design pattern that lets you construct complex objects step by step.
*           The pattern allows you to produce different types and representations of an object using the same construction code.
*/

int main(){

    ConcreteBuilderA builderA;
    ConcreteBuilderB builderB;

    Director director(&builderA);
    director.makeProduct();
    Product productA = builderA.getProduct();
    productA.show();

    director.changeBuilder(&builderB);
    director.makeProduct();
    Product productB = builderB.getProduct();
    productB.show();

    return 0;
}