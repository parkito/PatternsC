#pragma once

#include <array>
#include <iostream>
#include <memory>
#include <vector>
#include "Enums.h"

class PizzaModel {
public:
    [[nodiscard]] int getSize() const;

    std::vector<Edible::diary> getDiary();

    std::vector<Edible::meat> getMeat();

    std::vector<Edible::veggie> getVeggie();

    virtual void cook() = 0;

    void addDiary(Edible::diary c_diary);

    void addMeat(Edible::meat c_meat);

    void addVeggie(Edible::veggie c_veggie);

private:
    std::vector<Edible::diary> diary{};
    std::vector<Edible::meat> meat{};
    std::vector<Edible::veggie> veggie{};

protected:
    template<typename T>
    void printComponent(std::vector<T> vec, const std::string &name);

    void printComponents(PizzaModel &pizza);
};
