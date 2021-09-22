cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project("PAtternsC")

add_library(
        patterns
        src/creational/builder/telescoping/Person.cpp
        src/creational/factory_method/AbstractPizza.cpp
        src/creational/factory_method/NyPizza.cpp
        src/creational/factory_method/ItalianPizza.cpp
        src/creational/factory_method/PizzaFactory.cpp
)

#set(CXXFLAGS ${CXXFLAGS} -std=c++2a)
add_compile_options(-std=c++2a)
message("Compiler ${CMAKE_CXX_COMPILER} version ${CMAKE_CXX_COMPILER_VERSION}")

add_executable(builder src/creational/builder/BuilderTest.cpp)
add_executable(factory_method src/creational/factory_method/FactoryMethodTest.cpp)

target_include_directories(
        patterns
        PUBLIC
        src/common
        src/creational/builder/telescoping
        src/creational/factory_method
)

target_link_libraries(
        builder
        patterns
)

target_link_libraries(
        factory_method
        patterns
)