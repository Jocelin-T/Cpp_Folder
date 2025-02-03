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

    ConcreteDecoratorA dec_a(&comp_a);
    ConcreteDecoratorB dec_b(&comp_a);

    dec_a.execute();
    std::cout << '\n';
    
    dec_b.execute();
    dec_b.extra();

    return 0;
}