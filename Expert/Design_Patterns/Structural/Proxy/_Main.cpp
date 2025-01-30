#include "Service.hpp"
#include "Proxy.hpp"

#include <iostream>

/* #################################### Proxy - Structural ####################################
* Notes:   Proxy is a structural design pattern that lets you provide a substitute or placeholder
*           for another object. A proxy controls access to the original object, allowing you to 
*           perform something either before or after the request gets through to the original object.
*/

int main(){

    Service service;
    Proxy proxy(&service);

    proxy.operation();


    return 0;
}