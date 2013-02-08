
cmake_minimum_required(VERSION 2.6)

#set(CMAKE_MODULE_PATH "./cmake_modules/")
#------------------------------------------------------------------------------
# building a testrunner to check code of fraction
#------------------------------------------------------------------------------
#------------------------------------------------------------------------------
# building a second  testrunner to check code of my classes
#------------------------------------------------------------------------------

PROJECT(gdcode)

SET(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake_modules/" )
MESSAGE( The Search Path is now :   "${CMAKE_MODULE_PATH}\n")
INCLUDE_DIRECTORIES(${dl_INCLUDE_DIR})
FIND_PACKAGE(dl REQUIRED)

ADD_EXECUTABLE(gdcode greet.cpp)
TARGET_LINK_LIBRARIES(gdcode     ${dl_LIBRARY} )
INSTALL(TARGETS gdcode DESTINATION "bin")

FILE(COPY users DESTINATION ${CMAKE_BINARY_DIR})

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
add_test(ProgRuns gdcode)
