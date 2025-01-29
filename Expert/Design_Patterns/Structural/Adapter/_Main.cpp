#include "ConcreteClient.hpp"
#include "Service.hpp"
#include "Adapter.hpp"

#include <iostream>

/* #################################### Adapter - Structural ####################################
* Notes:   Adapter is a structural design pattern that allows objects with incompatible 
*           interfaces to collaborate.
*/

int main(){

    ConcreteClient client;
    std::cout << client.Request() << '\n';

    Service service;
    std::cout << service.SpecificRequest() << '\n';
    
    Adapter adapter;
    std::cout << adapter.Request() << '\n';

    return 0;
}