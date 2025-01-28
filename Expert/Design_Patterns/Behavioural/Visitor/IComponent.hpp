#pragma once

#include "IVisitor.hpp"

#include <iostream>

class IVisitor;

class IComponent {
public:
    virtual ~IComponent() = default;
    virtual void accept(IVisitor* p_visitor) = 0;
};