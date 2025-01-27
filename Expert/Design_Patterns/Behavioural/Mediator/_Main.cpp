
#include "ConcreteMediator.hpp"
#include "ComponentA.hpp"
#include "ComponentB.hpp"

#include <iostream>

/* #################################### Mediator - Behavioural ####################################
* Notes:   The Mediator pattern will add a layer between Objects, so any interactions between Object
*           will happens in the Mediator.
*/

int main(){

    ComponentA comp_a;
    ComponentB comp_b;
    ConcreteMediator mediator(&comp_a, &comp_b);

    comp_a.notifyMediator("Hello");
    comp_b.notifyMediator("Hello");

    mediator.operationComponent(&comp_a);

    return 0;
}