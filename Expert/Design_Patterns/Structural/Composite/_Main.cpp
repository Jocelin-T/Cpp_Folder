#include "Composite.hpp"
#include "LeafA.hpp"
#include "LeafB.hpp"
#include "LeafC.hpp"

#include <iostream>

/* #################################### Composite - Structural ####################################
* Notes:   Composite is a structural design pattern that lets you compose objects into tree structures
*           and then work with these structures as if they were individual objects.
*/

int main(){

    LeafA leafA;
    LeafB leafB;
    LeafC leafC;

    // Package contain 2 leafs
    Composite composite_package;
    composite_package.addComponent(&leafA);
    composite_package.addComponent(&leafB);

    // Box contain 2 leafs
    Composite composite_box;
    composite_box.addComponent(&leafB);
    composite_box.addComponent(&leafC);

    // Package contain the box
    composite_package.addComponent(&composite_box);

    composite_package.execute();

    return 0;
}