cmake_minimum_required(VERSION 3.18)
project(AirlineApp)

set(CMAKE_CXX_STANDARD 23)

include_directories(include)

add_executable(airline_app
    main.cpp
    src/AirlineTicket.cpp
)
