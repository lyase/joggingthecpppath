PROJECT(designPatterns)
cmake_minimum_required(VERSION 2.8)

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



add_definitions(-std=c++11 -Wall -Wextra -pedantic)

add_subdirectory(dynamicBehaviorDemo)
add_subdirectory(strategy)
ADD_EXECUTABLE(ducks apps/ducks.cpp)
target_link_libraries(ducks strategy)

add_subdirectory(observerPattern)
add_subdirectory(observer)
ADD_EXECUTABLE(weather apps/weather.cpp)
target_link_libraries(weather observerPattern)

add_subdirectory(decoratorPattern)
add_subdirectory(decorator)
ADD_EXECUTABLE(cafe apps/cafe.cpp)
target_link_libraries(cafe decorator)

add_subdirectory(factory)
ADD_EXECUTABLE(factoryexe apps/Factory.cpp)
target_link_libraries(factoryexe factory)

add_subdirectory(simulator)
ADD_EXECUTABLE(sim apps/simulator.cpp )
target_link_libraries(sim simulator)

add_subdirectory(well-managed-collections)
ADD_EXECUTABLE(waitress apps/diner.cpp)
target_link_libraries(waitress collections)
add_subdirectory(commandPattern)
ADD_EXECUTABLE(commandexe apps/command.cpp)
target_link_libraries(commandexe command)
add_subdirectory(compositePattern)
ADD_EXECUTABLE(compositeexe apps/composite.cpp)
target_link_libraries(compositeexe composite)
#-------------------------------------making doc target
find_package(Doxygen)

if (NOT ${DOXYGEN_EXECUTABLE} STREQUAL "DOXYGEN_EXECUTABLE_NOT_FOUND")
    message("${DOXYGEN_EXECUTABLE}")
    file(COPY Doxyfile DESTINATION ${CMAKE_BINARY_DIR})
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
enable_testing()
add_subdirectory(tests)

