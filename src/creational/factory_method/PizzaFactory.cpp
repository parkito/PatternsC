#include "ItalianPizza.h"
#include "NyPizza.h"

std::unique_ptr<PizzaModel> PizzaFactory::prepare(
        Edible::portion size,
        Edible::pizzaType type
) {
    std::unique_ptr<PizzaModel> pizza;

    if (size == Edible::portion::small || size == Edible::portion::large) {
        pizza = std::make_unique<ItalianPizza>();
    } else {
        pizza = std::make_unique<NyPizza>();
    }

    switch (type) {
        case Edible::pizzaType::norishing:
            pizza->addMeat(Edible::meat::chicken);
            pizza->addMeat(Edible::meat::beef);
            pizza->addMeat(Edible::meat::pork);

            pizza->addDiary(Edible::diary::cheese);

            pizza->addVeggie(Edible::veggie::tomatos);
            pizza->addVeggie(Edible::veggie::pineapple);
            break;

        case Edible::pizzaType::vegeterian:
            pizza->addMeat(Edible::meat::soya);

            pizza->addDiary(Edible::diary::jougurt);

            pizza->addVeggie(Edible::veggie::tomatos);
            pizza->addVeggie(Edible::veggie::pineapple);
            pizza->addVeggie(Edible::veggie::lettuce);
            break;

        case Edible::pizzaType::vegan:
            pizza->addMeat(Edible::meat::soya);

            pizza->addVeggie(Edible::veggie::tomatos);
            pizza->addVeggie(Edible::veggie::pineapple);
            pizza->addVeggie(Edible::veggie::lettuce);
            break;

        case Edible::pizzaType::noDiary:
            pizza->addMeat(Edible::meat::chicken);
            pizza->addVeggie(Edible::veggie::tomatos);
            pizza->addVeggie(Edible::veggie::pineapple);
            pizza->addVeggie(Edible::veggie::lettuce);
            break;

        case Edible::pizzaType::bird:
            pizza->addMeat(Edible::meat::chicken);

            pizza->addDiary(Edible::diary::cheese);
            pizza->addDiary(Edible::diary::sourCream);
            pizza->addDiary(Edible::diary::milk);

            pizza->addVeggie(Edible::veggie::tomatos);
            pizza->addVeggie(Edible::veggie::pineapple);
            pizza->addVeggie(Edible::veggie::lettuce);
            break;

        case Edible::pizzaType::moo:
            pizza->addMeat(Edible::meat::beef);

            pizza->addDiary(Edible::diary::cheese);
            pizza->addDiary(Edible::diary::sourCream);
            pizza->addDiary(Edible::diary::milk);

            pizza->addVeggie(Edible::veggie::tomatos);
            pizza->addVeggie(Edible::veggie::lettuce);
            break;
    }

    return pizza;
}