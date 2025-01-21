
#include "Container.hpp"
#include "IIterator.hpp"
#include "ConcreteIteratorVector.hpp"

#include <iostream>
#include <memory>

/* #################################### Iterator - Behavioural ####################################
* Notes:   The Iterator pattern ensure that changing the internal of an object doesn't affect 
*           consumers (part of the code who interact the Object).
*/

int main(){

    Container<int> container;
    
    container.add(1);
    container.add(2);
    container.add(3);
    
    auto it = container.createIterator();

    std::cout << "Start loop trought: " << container.count() << " elements" << '\n';
    for (it->first(); !it->hasNext(); it->next()) {
        std::cout << *it->current() << '\n';
    }

    return 0;
}