cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

project("PatternsC")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_compile_options(-std=c++2a)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(
        builder_test
        src/creational/builder/telescoping/BuilderTest.cc
        src/creational/factory_method/FactoryMethodTest.cc
)
target_link_libraries(
        builder_test
        gtest_main
)

include(GoogleTest)
gtest_discover_tests(builder_test)

add_library(
        builder_lib
        SHARED
        src/creational/builder/telescoping/Person.cpp
        src/creational/factory_method/PizzaModel.cpp
        src/creational/factory_method/ItalianPizza.cpp
        src/creational/factory_method/NyPizza.cpp
)

target_include_directories(
        builder_lib
        PUBLIC
        src
)

include_directories(
        src/common
)
