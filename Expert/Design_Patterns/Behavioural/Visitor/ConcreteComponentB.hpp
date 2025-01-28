#pragma once

#include "IComponent.hpp"

#include <string>

// class IVisitor;

// class ConcreteComponentA : public IComponent {
// public:
//     void accept(IVisitor* p_visitor) override;

//     std::string exclusiveMethodOfConcreteComponentA(void);
// };

class ConcreteComponentB : public Component {
  /**
   * Same here: visitConcreteComponentB => ConcreteComponentB
   */
 public:
  void Accept(Visitor *visitor) const override {
    visitor->VisitConcreteComponentB(this);
  }
  std::string SpecialMethodOfConcreteComponentB() const {
    return "B";
  }
};