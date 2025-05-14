cmake_minimum_required(VERSION 3.16)

project(PermutationProjekt LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(permutation_ohne_wiederholung
    permutation_ohne_wiederholung.cpp
    menue.cpp
    permutations.cpp
)

target_include_directories(permutation_ohne_wiederholung PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
