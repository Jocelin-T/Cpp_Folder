#pragma once

#include "IIterator.hpp"
#include "ConcreteIteratorVector.hpp"

#include <iostream>
#include <vector>
#include <memory>

// Use of Template to allow the use of any type of data
template <class T>
class Container {
    friend class ConcreteIteratorVector<T, Container>;

public:
    void add(T data) {
        m_container.push_back(data);
    }

    int count() {
        return m_container.size();
    }

    // ConcreteIteratorVector<T, Container> *createIterator() {
    //     return new ConcreteIteratorVector<T, Container>(this);
    // }

    std::unique_ptr<ConcreteIteratorVector<T, Container>> createIterator() {
        return std::make_unique<ConcreteIteratorVector<T, Container>>(this);
    }

private:
    std::vector<T> m_container;
};
