#pragma once

#include "PizzaModel.h"

class ItalianPizza : public PizzaModel {
public:
    void cook() override;
};
