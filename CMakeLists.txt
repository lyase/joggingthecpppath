
cmake_minimum_required(VERSION 2.6)

#set(CMAKE_MODULE_PATH "./cmake_modules/")
#------------------------------------------------------------------------------
# building a testrunner to check code of fraction
#------------------------------------------------------------------------------
#------------------------------------------------------------------------------
# building a second  testrunner to check code of my classes
#------------------------------------------------------------------------------

PROJECT(ducks)

add_definitions(-std=c++11)

ADD_EXECUTABLE(ducks main.cpp)
