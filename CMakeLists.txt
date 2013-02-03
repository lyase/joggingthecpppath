
cmake_minimum_required(VERSION 2.6)

#set(CMAKE_MODULE_PATH "./cmake_modules/")
#------------------------------------------------------------------------------
# building a testrunner to check code of fraction
#------------------------------------------------------------------------------
#------------------------------------------------------------------------------
# building a second  testrunner to check code of my classes
#------------------------------------------------------------------------------

PROJECT(gdcode)
INCLUDE_DIRECTORIES(${dl_INCLUDE_DIR})
SET(gdcode_src greet.cpp)
ADD_EXECUTABLE(gdcode ${gdcode_src})
SET(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake_modules/" )
MESSAGE( The Search Path is now :   "${CMAKE_MODULE_PATH}\n")
FIND_PACKAGE(dl REQUIRED)
TARGET_LINK_LIBRARIES(gdcode     ${dl_LIBRARY} )
INSTALL(TARGETS gdcode DESTINATION "bin")
#------------------------------------------------------------------------------------------------------
