project (imulator)
add_library(simulator STATIC  DuckFactory.cpp CountingDuckFactory.cpp QuackCounter.cpp AbstractDuckFactory.hpp DuckFactories.hpp)

cmake_minimum_required(VERSION 2.8) # http://www.cmake.org/cmake/help/cmake-2-8-docs.html#command:cmake_minimum_required

include(CheckCXXCompilerFlag)

CHECK_CXX_COMPILER_FLAG(-std=c++11 HAVE_CPP11)
if(HAVE_CPP11)
   MESSAGE(STATUS "Found std=c++11 compatible compiler\n setting flags and variable HAVE_CPP11\n")
    add_definitions(-std=c++11 -DHAVE_CPP11)
else()
   MESSAGE(STATUS "did not Find std=c++11 compatible compiler")
    add_definitions(-std=c++0x)
endif()


