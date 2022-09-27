#include "Person.cpp"
#include <unordered_map>
#include <gtest/gtest.h>

TEST (PersonBuildingSuit, GetterTest) {
    std::string id = "id";
    std::string name = "name";
    int age = 10;

    auto person = Person::builder()
            .withId(id)
            .withName(name)
            .withAge(age)
            .build();

    EXPECT_EQ (id, person.get()->getId());
    EXPECT_EQ (name, person.get()->getName());
    EXPECT_EQ (age, person.get()->getAge());
}
