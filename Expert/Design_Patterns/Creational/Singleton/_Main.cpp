#include "Singleton.hpp"

#include <iostream>

/* #################################### Singleton - Creational ####################################
* Notes:   Singleton is a creational design pattern that lets you ensure that a class has 
*           only one instance, while providing a global access point to this instance.
*/

// Initialize the static instance variable to nullptr
Singleton* Singleton::instance = nullptr;

int main(){

    // Access the Singleton instance
    Singleton& singleton = Singleton::getInstance();

    // Use the Singleton instance
    singleton.someOperation();

    // Attempting to create another instance will not work
    Singleton& anotherInstance = Singleton::getInstance();

    return 0;
}