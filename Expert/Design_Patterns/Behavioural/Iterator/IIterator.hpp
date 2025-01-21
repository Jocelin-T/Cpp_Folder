#pragma once

#include <iostream>
#include <vector>

// Use of Template to allow the use of any type of data
// T => Type of data
// U => Container
template <typename T, typename U>
class IIterator {
public:
    // Define the type of the iterator
    typedef typename std::vector<T>::iterator iterator_type_t;

    // Can be used with a raw pointer, because it's a Abstract Class
    IIterator(U* p_container) {
        std::cout << "IIterator created" << '\n';
    }
    virtual ~IIterator() {
        std::cout << "IIterator destroyed" << '\n';
    }

    virtual void next(void) = 0;
    virtual T current(void) const = 0;
    virtual bool hasNext(void) const = 0;
};