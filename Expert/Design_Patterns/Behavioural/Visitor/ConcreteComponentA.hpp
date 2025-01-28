#pragma once

#include "IComponent.hpp"

#include <string>

class IVisitor;

class ConcreteComponentA : public IComponent {
public:
    void accept(IVisitor* p_visitor) override;

    std::string exclusiveMethodOfConcreteComponentA(void);
};