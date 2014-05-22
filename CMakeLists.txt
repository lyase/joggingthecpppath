cmake_minimum_required(VERSION 2.6)

PROJECT(design_patterns)

add_definitions(-std=c++11 -Wall -Wextra -pedantic)

add_subdirectory(strategy)
ADD_EXECUTABLE(ducks ducks.cpp)
target_link_libraries(ducks strategy)

add_subdirectory(observer)
ADD_EXECUTABLE(weather weather.cpp)
target_link_libraries(weather observerPattern)

add_subdirectory(decorator)
ADD_EXECUTABLE(cafe cafe.cpp)
target_link_libraries(cafe decorator)
add_subdirectory(factory)
ADD_EXECUTABLE(factoryexe Factory.cpp)
target_link_libraries(factoryexe factory)
add_subdirectory(simulator)
ADD_EXECUTABLE(sim simulator.cpp)
target_link_libraries(sim simulator)
target_link_libraries(sim simulator)
add_subdirectory(well-managed-collections)
ADD_EXECUTABLE(waitress diner.cpp)
target_link_libraries(waitress collections)
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

add_test(Runningduckprg ducks)
add_test(Runningcafeprg cafe)
add_test(Runningweatherprg weather)
add_test(RunningTheDuckSimulator sim)
add_test(Runningwaitress-ManagedCollections waitress )
