cmake_minimum_required(VERSION 2.6)

PROJECT(ducks)

add_definitions(-std=c++11 -Wall -Wextra -pedantic)

add_subdirectory(ducky)

ADD_EXECUTABLE(ducks main.cpp)
target_link_libraries(ducks ducky)
