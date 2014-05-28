cmake_minimum_required(VERSION 2.8)
project ("design_patterns")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake_modules/")
# Add new build types
message("* Adding build types...")

SET(GCC_DEBUG_FLAGS "-g -Wall")
SET(CMAKE_CXX_FLAGS_COVERAGE "${GCC_DEBUG_FLAGS} -fprofile-arcs -ftest-coverage"
    CACHE STRING "Flags used by the C++ compiler during coverage builds." FORCE )
SET(CMAKE_C_FLAGS_COVERAGE "${GCC_DEBUG_FLAGS} -fprofile-arcs -ftest-coverage"
    CACHE STRING "Flags used by the C compiler during coverage builds." FORCE )
SET(CMAKE_EXE_LINKER_FLAGS_COVERAGE ""
    CACHE STRING "Flags used for linking binaries during coverage builds."                    FORCE )
SET(CMAKE_SHARED_LINKER_FLAGS_COVERAGE ""
    CACHE STRING "Flags used by the shared libraries linker during coverage builds."              FORCE )
MARK_AS_ADVANCED( CMAKE_CXX_FLAGS_COVERAGE
                  CMAKE_C_FLAGS_COVERAGE
                  CMAKE_EXE_LINKER_FLAGS_COVERAGE
                  CMAKE_SHARED_LINKER_FLAGS_COVERAGE )


include(CheckCXXCompilerFlag)

CHECK_CXX_COMPILER_FLAG(-std=c++11 HAVE_CPP11)
if(HAVE_CPP11)
   MESSAGE(STATUS "Found std=c++11 compatible compiler\n setting flags and variable HAVE_CPP11\n")
    add_definitions(-std=c++11 -DHAVE_CPP11)
else()
   MESSAGE(STATUS "did not Find std=c++11 compatible compiler")
    add_definitions(-std=c++0x)
endif()

                                   
add_definitions(-Wall -Wextra -pthread)

IF(NOT CMAKE_BUILD_TYPE)
SET(CMAKE_BUILD_TYPE Debug                                  CACHE STRING "Choose the type of build : None Debug Release RelWithDebInfo MinSizeRel Coverage."  FORCE)
ENDIF(NOT CMAKE_BUILD_TYPE)
message("* Current build type is : ${CMAKE_BUILD_TYPE}")

#################################detecting doxygen before making a doc target###############################
find_package(Doxygen)

if (NOT ${DOXYGEN_EXECUTABLE} STREQUAL "DOXYGEN_EXECUTABLE_NOT_FOUND")
    message("${DOXYGEN_EXECUTABLE}")
configure_file(design_patternslib.cfg Doxyfile)
    set(COMMAND ${DOGYGEN_EXECUTABLE} Doxyfile)
add_custom_target(doc
        ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM
    )

add_custom_target(doc_pdf
        make pdf
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/doc/latex
        DEPENDS doc
        COMMENT "Generating API documentation - pdf version"
        VERBATIM
    )
endif()
#------------------------------------------------------------------------------------------------------
# http://www.cmake.org/cmake/help/cmake-2-8-docs.html#command:project

# various Patterns
add_subdirectory(commandPattern)
add_subdirectory(compositePattern)
add_subdirectory(decoratorPattern)
add_subdirectory(dynamicBehaviorDemo)
add_subdirectory(factory)
add_subdirectory(iteratorPattern)
add_subdirectory(observerPattern)
add_subdirectory(simulator)
add_subdirectory(strategy)

add_library(design_patternslib empty.cpp)
target_link_libraries(design_patternslib commandPattern compositePattern  decoratorPattern dynamicBehaviorDemo  factory iteratorPattern  observerPattern simulator strategy )
 
#------------------------------------------------------------------------------------------------------

enable_testing()

add_subdirectory(tests)
## Executables ##
#Factory.cpp
#cafe.cpp
#command.cpp
#composite.cpp
#diner.cpp
#ducks.cpp
#greet.cpp
#simulator.cpp
#weather.cpp
add_executable(Factory examples/Factory.cpp)
TARGET_LINK_LIBRARIES(Factory design_patternslib)
add_executable(coffee examples/cafe.cpp)
TARGET_LINK_LIBRARIES(coffee design_patternslib)
add_executable(command examples/command.cpp)
TARGET_LINK_LIBRARIES(command  design_patternslib)
add_executable(composite examples/composite.cpp)
TARGET_LINK_LIBRARIES(composite design_patternslib)
add_executable(waitress examples/diner.cpp)
TARGET_LINK_LIBRARIES(waitress  design_patternslib)
add_executable(duck examples/ducks.cpp)
TARGET_LINK_LIBRARIES(duck design_patternslib)
#ogreet.cpp
add_executable(simul  examples/simulator.cpp)
TARGET_LINK_LIBRARIES(simul  design_patternslib)
add_executable(weatherstation examples/weather.cpp)
TARGET_LINK_LIBRARIES(weatherstation design_patternslib)
#------------------------------------------------------------------------------------------------------
