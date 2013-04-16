cmake_minimum_required(VERSION 2.6)

PROJECT(ducks)

add_definitions(-std=c++11 -Wall -Wextra -pedantic)

add_subdirectory(ducky)

ADD_EXECUTABLE(ducks main.cpp)
target_link_libraries(ducks ducky)
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
add_test(ProgRuns ducks)
