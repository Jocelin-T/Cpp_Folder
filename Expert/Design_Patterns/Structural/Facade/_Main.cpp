#include "Facade.hpp"

#include <iostream>
#include <memory>

/* #################################### Facade - Structural ####################################
* Notes:    Facade is a structural design pattern that provides a simplified interface to a 
*            library, a framework, or any other complex set of classes.   
*/

int main(){

    Facade facade;

    facade.subsystemOperation();

    return 0;
}