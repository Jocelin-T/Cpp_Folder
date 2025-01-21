#pragma once

#include <iostream>

class AbstractClass {
public:
    virtual ~AbstractClass() = default;

    void templateMethod() {
        baseOperation1();
        baseOperation2();
        primitiveOperation1();
        primitiveOperation2();
        hook();
    }

protected:
    // These methods are the same for all Derived Classes
    void baseOperation1() {
        std::cout << "AbstractClass baseOperation1\n";
    }
    void baseOperation2() {
        std::cout << "AbstractClass baseOperation2\n";
    }

    // These methods are different for each Derived Class and MUST be implemented
    virtual void primitiveOperation1() = 0;
    virtual void primitiveOperation2() = 0;

    // This method is optional and can be overridden by the Derived Class
    virtual void hook() {
        std::cout << "AbstractClass hook\n";
    }
};