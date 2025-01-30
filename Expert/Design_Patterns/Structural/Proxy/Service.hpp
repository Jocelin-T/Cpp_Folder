#pragma once

#include "IService.hpp"

#include <iostream>

class Service : public IService {
public:
    void operation(void) {
        std::cout << "Service::Operation\n";
    }
};