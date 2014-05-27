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
add_test(Runningwaitress-ManagedCollections ${CMAKE_CURRENT_BINARY_DIR}/../waitress)
add_test(helloboosttest ${CMAKE_CURRENT_BINARY_DIR}/../tests/hellotest)
add_test(command ${CMAKE_CURRENT_BINARY_DIR}/../command)
add_test(Factoryexe ${CMAKE_CURRENT_BINARY_DIR}/../Factory)
add_test(coffeeexe ${CMAKE_CURRENT_BINARY_DIR}/../coffee)
add_test(command ${CMAKE_CURRENT_BINARY_DIR}/../command)
add_test(composite ${CMAKE_CURRENT_BINARY_DIR}/../composite)
add_test(duck ${CMAKE_CURRENT_BINARY_DIR}/../duck)
add_test(simul ${CMAKE_CURRENT_BINARY_DIR}/../simul)
add_test(waitress ${CMAKE_CURRENT_BINARY_DIR}/../waitress)
add_test(weatherstation ${CMAKE_CURRENT_BINARY_DIR}/../weatherstation)
