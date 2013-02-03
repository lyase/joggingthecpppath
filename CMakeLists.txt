
cmake_minimum_required(VERSION 2.6)
SET(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake_modules)

#set(CMAKE_MODULE_PATH "./cmake_modules/")
#------------------------------------------------------------------------------
# building a testrunner to check code of fraction
#------------------------------------------------------------------------------
#------------------------------------------------------------------------------
# building a second  testrunner to check code of my classes
#------------------------------------------------------------------------------

PROJECT(gdcode)
FIND_PACKAGE(dl REQUIRED)
INCLUDE_DIRECTORIES(${dl_INCLUDE_DIR})
SET(gdcode_src greet.c)
ADD_EXECUTABLE(gdcode ${gdcode_src})
TARGET_LINK_LIBRARIES(gdcode     ${dl_LIBRARY} )
INSTALL(TARGETS gdcode DESTINATION "bin")
#------------------------------------------------------------------------------------------------------
