#include "ConcreteComponentA.hpp"
#include "ConcreteDecoratorA.hpp"
#include "ConcreteDecoratorB.hpp"

#include <iostream>

/* #################################### Decorator - Structural ####################################
* Notes:   Decorator is a structural design pattern that lets you attach new behaviors to objects 
*           by placing these objects inside special wrapper objects that contain the behaviors.
*/

int main(){

    ConcreteComponentA comp_a;

    ConcreteDecoratorA decorator_a(&comp_a);
    ConcreteDecoratorB decorator_b(&comp_a);

    decorator_a.execute();
    std::cout << '\n';
    
    decorator_b.execute();
    decorator_b.extra();

    return 0;
}