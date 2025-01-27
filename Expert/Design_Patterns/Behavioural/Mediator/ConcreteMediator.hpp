#pragma once

#include "IMediator.hpp"
#include "ComponentA.hpp"
#include "ComponentB.hpp"

#include <iostream>

class AComponent;

class ConcreteMediator : public IMediator{
public:
    ConcreteMediator(ComponentA* p_comp_a, ComponentB* p_comp_b)
        : m_p_component_a(p_comp_a), m_p_component_b(p_comp_b)
    {
        m_p_component_a->setMediator(this);
        m_p_component_b->setMediator(this);
    }

    void notify(AComponent* p_sender, const std::string& message) override {
        p_sender->notifyMediator(message);
    }

    // activate the operation of the other Object
    void operationComponent(AComponent* p_comp) override {

        if (p_comp == m_p_component_a) {
            std::cout << "Component A send interact with B\n";
            m_p_component_b->operationComponent();
        }
        if (p_comp == m_p_component_b) {
            std::cout << "Component B send interact with A\n";
            m_p_component_a->operationComponent();
        }
    }

private:
    ComponentA* m_p_component_a{ nullptr };
    ComponentB* m_p_component_b{ nullptr };
};