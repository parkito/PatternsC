#pragma onceonce

#include <array>
#include <iostream>
#include <memory>
#include <vector>
#include "PizzaFactory.h"

class PizzaModel {
public:
    [[nodiscard]] int getSize() const;

    std::vector<Edible::diary> getDiary();

    std::vector<Edible::meat> getMeat();

    std::vector<Edible::veggie> getVeggie();

    virtual void cook() = 0;

    friend PizzaFactory;

private:
    std::vector<Edible::diary> diary{};
    std::vector<Edible::meat> meat{};
    std::vector<Edible::veggie> veggie{};

    void addDiary(Edible::diary c_diary);

    void addMeat(Edible::meat c_meat);

    void addVeggie(Edible::veggie c_veggie);
};

template<typename T>
void printComponent(std::vector<T> vec, const std::string &name) {
    std::cout << name + "[";
    for (const auto &item: vec) {
        std::cout << item << " ";
    }
    std::cout << "]" << std::endl;
}

void printComponents(PizzaModel &pizza) {
    printComponent(pizza.getDiary(), "Diary");
    printComponent(pizza.getMeat(), "Meat");
    printComponent(pizza.getVeggie(), "Veggies");
}