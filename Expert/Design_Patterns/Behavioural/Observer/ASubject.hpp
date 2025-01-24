#pragma once

#include "IObserver.hpp"

#include <iostream>
#include <string>
#include <vector>

// This is the Abstract Subject class that will be inherited by the Concrete Subject class.
class ASubject {
public:
    void addObserver(IObserver* p_observer) {
        m_p_observers.push_back(p_observer);
    }

    void removeObserver(IObserver* p_observer) {
        for (size_t i = 0; i < m_p_observers.size(); i++) {
            if (m_p_observers[i] == p_observer) {
                m_p_observers.at(i) = m_p_observers.back();
                m_p_observers.pop_back();
                break;
            }
        }
    }

    void notifyObserver(const std::string& message) {
        for (IObserver* m_p_observers : m_p_observers) {
            m_p_observers->update(message);
        }
    }

private:
    std::vector<IObserver*> m_p_observers;    
};