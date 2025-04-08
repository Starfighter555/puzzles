cmake_minimum_required(VERSION 3.16)
project(CarProject LANGUAGES CXX)

# C++-Standard setzen
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Quell- und Headerdateien
set(SOURCES
    main.cpp
    car.cpp
    utils.cpp
)

set(HEADERS
    car.hpp
    utils.hpp
)

# Executable erzeugen
add_executable(car_program ${SOURCES} ${HEADERS})

# (Optional) Warnings aktivieren
target_compile_options(car_program PRIVATE
    -Wall
    -Wextra
    -pedantic
)
