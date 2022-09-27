#pragma onceonce

#include <Enums.hpp>

class PizzaModel;

class PizzaFactory {
public:
    static std::unique_ptr <PizzaModel> prepare(Edible::portion size, Edible::pizzaType type);
};