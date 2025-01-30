#include "Context.hpp"

#include <iostream>

/* #################################### Flyweight - Structural ####################################
* Notes:   Flyweight is a structural design pattern that lets you fit more objects into the available
*           amount of RAM by sharing common parts of state between multiple objects instead of keeping
*           all of the data in each object.
*          The best is to use a factory, to be sure that an Object as only 1 state
*/

int main(){

    Context context('b', 1);
    context.operation();
    context.addFlyweight('b', 2);
    context.operation();
    
    context.addFlyweight('c', 2);
    context.operation();

    return 0;
}