cmake_minimum_required(VERSION 2.8)
project (iteratorPattern)

add_definitions(--std=c++11 -Wall -Wextra)

add_library(iteratorPattern STATIC empty.cpp Waitress.hpp MenuItem.hpp DinerMenu.hpp  MenuItem.hpp PancakeHouseMenu.hpp DinerMenu.hpp )
