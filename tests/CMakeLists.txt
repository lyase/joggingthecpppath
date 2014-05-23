cmake_minimum_required(VERSION 2.8)
# Wt and Boost
find_package(Boost COMPONENTS system thread signals)

find_package(Boost COMPONENTS system filesystem unit_test_framework REQUIRED)

find_library(wt NAMES wtd wt)
find_library(wthttp NAMES wthttpd wthttp)
#------------------------------------------------------------------------------------------------------

ADD_EXECUTABLE(hellotest hellotest.cpp)
TARGET_LINK_LIBRARIES(hellotest  pthread  
${Boost_FILESYSTEM_LIBRARY}  
${Boost_SYSTEM_LIBRARY}  
${Boost_FILESYSTEM_LIBRARY}  
${Boost_SYSTEM_LIBRARY}  
${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})
enable_testing()
add_test(Runningduckprg ${CMAKE_CURRENT_BINARY_DIR}/../ducks)
add_test(Runningcafeprg ${CMAKE_CURRENT_BINARY_DIR}/../cafe)
add_test(Runningdecoratorprg ${CMAKE_CURRENT_BINARY_DIR}/../factoryexe)
add_test(Runningweatherprg ${CMAKE_CURRENT_BINARY_DIR}/../weather)
add_test(RunningTheDuckSimulator ${CMAKE_CURRENT_BINARY_DIR}/../sim)
add_test(Runningwaitress-ManagedCollections ${CMAKE_CURRENT_BINARY_DIR}/../waitress)
add_test(helloboosttest ${CMAKE_CURRENT_BINARY_DIR}/../tests/hellotest)
