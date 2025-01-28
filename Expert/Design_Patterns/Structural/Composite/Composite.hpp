#pragma once

#include "IComponent.hpp"

#include <iostream>
#include <vector>

class Composite : public IComponent {
public:
    void addComponent(IComponent* p_component) {
        m_p_components.push_back(p_component);
    }

    // void removeComponent(IComponent* p_component) {
    //     m_p_components.erase(std::remove(m_p_components.begin(), m_p_components.end(), p_component), m_p_components.end());
    // }

    IComponent* getComponent(int index) {
        return m_p_components.at(index);
    }

    int execute(void) {
        
        int total{ 0 };

        for (auto p_component : m_p_components) {
            total += p_component->execute();
        }

        std::cout << "Composite executed with total: " << total << '\n';
        return total;
    }

private:
    std::vector<IComponent*> m_p_components;
};