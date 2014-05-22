cmake_minimum_required(VERSION 2.6)
#------------------------------------------------------------------------------------------------------
enable_testing()
add_test(Runningduckprg ${CMAKE_CURRENT_BINARY_DIR}/../ducks)
add_test(Runningcafeprg ${CMAKE_CURRENT_BINARY_DIR}/../cafe)
add_test(Runningweatherprg ${CMAKE_CURRENT_BINARY_DIR}/../weather)
add_test(Runningweatherprg ${CMAKE_CURRENT_BINARY_DIR}/../weather)
add_test(Runningweatherprg ${CMAKE_CURRENT_BINARY_DIR}/../weather)
add_test(RunningTheDuckSimulator ${CMAKE_CURRENT_BINARY_DIR}/../sim)
add_test(Runningwaitress-ManagedCollections ${CMAKE_CURRENT_BINARY_DIR}/../waitress)

