#pragma once

#include "IService.hpp"
#include "Service.hpp"

#include <iostream>

class Proxy : public IService {
public:
    Proxy(Service* p_service)
        : m_p_service{p_service}
    {}

    void operation(void) {
        if (checkAccess()){
            m_p_service->operation();
        }
    }

    // Operation before launching the service
    bool checkAccess(void){
        std::cout << 
        return true;
    }

private:
    Service* m_p_service{ nullptr };
};