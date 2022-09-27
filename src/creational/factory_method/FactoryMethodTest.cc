#include "PizzaModel.h"
#include "PizzaFactory.h"
#include <gtest/gtest.h>

TEST (FactoryTestSuit, FactoryMethodTest) {
    auto pizza = PizzaFactory::prepare(Edible::portion::big, Edible::pizzaType::norishing);

    EXPECT_EQ (1, pizza.get()->getDiary().size());
}
