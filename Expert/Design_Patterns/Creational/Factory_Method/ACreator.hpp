#pragma once

#include <iostream>

#include "IProduct.hpp"

class ACreator {
public:
    void someOperation(void) {
        IProduct* p_product = createProduct();
        p_product->doStuff();
    }

    virtual IProduct* createProduct(void) = 0;
};