#pragma once

#include "IBuilder.hpp"
#include "Product.hpp"

class ConcreteBuilderB : public IBuilder {
public:
    ConcreteBuilderB() {
        m_product = Product();
    }

    void buildStepA(const std::string& part_A) override {
        m_product.setPartA(part_A + "B");
    }

    void buildStepB(const std::string& part_B) override {
        m_product.setPartB(part_B + "B");
    }

    void buildStepC(const std::string& part_C) override {
        m_product.setPartC(part_C + "B");
    }

    Product getProduct(void) {
        return m_product;
    }

private:
    Product m_product;
};