#include "PizzaModel.h"

int PizzaModel::getSize() const { return diary.size() + meat.size() + veggie.size(); }

std::vector<Edible::diary> PizzaModel::getDiary() { return diary; }

std::vector<Edible::meat> PizzaModel::getMeat() { return meat; }

std::vector<Edible::veggie> PizzaModel::getVeggie() { return veggie; }

void PizzaModel::addDiary(Edible::diary c_diary) { diary.push_back(c_diary); }

void PizzaModel::addMeat(Edible::meat c_meat) { meat.push_back(c_meat); }

void PizzaModel::addVeggie(Edible::veggie c_veggie) { veggie.push_back(c_veggie); }
