#include "ConcreteHandlerA.hpp"
#include "ConcreteHandlerB.hpp"

#include <iostream>

/* #################################### Chain of Responsibility - Behavioural ####################################
* Notes:   The Chain of Responsibility pattern is a behavioural design pattern that allows an object to pass 
*           a request along a chain of handlers.
*/

int main(){

    ConcreteHandlerA handler_a;
    ConcreteHandlerA handler_b;
    ConcreteHandlerB handler_c;

    handler_a.setNext(&handler_b);
    handler_b.setNext(&handler_c);

    handler_a.handle(0);

    return 0;
}