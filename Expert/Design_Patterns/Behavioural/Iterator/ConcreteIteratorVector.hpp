#pragma once

#include "IIterator.hpp"

#include <iostream>
#include <vector>

// Use of Template to allow the use of any type of data
// T => Type of data
// U => Container
template <typename T, typename U>
class ConcreteIteratorVector {
 public:
  typedef typename std::vector<T>::iterator iterator_type_t;
  ConcreteIteratorVector(U *p_container, bool reverse = false) : m_p_container(p_container) {
    m_iterator = m_p_container->m_container.begin();
  }

  void first() {
    m_iterator = m_p_container->m_container.begin();
  }

  void next() {
    m_iterator++;
  }

  bool hasNext() {
    return (m_iterator == m_p_container->m_container.end());
  }

  iterator_type_t current() {
    return m_iterator;
  }

 private:
  U* m_p_container;
  iterator_type_t m_iterator{ 0 };
};