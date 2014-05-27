cmake_minimum_required(VERSION 2.8)
project ("design_patterns")
# http://www.cmake.org/cmake/help/cmake-2-8-docs.html#command:project

# various Patterns
add_subdirectory(commandPattern)
add_subdirectory(compositePattern)
add_subdirectory(decorator)
add_subdirectory(decoratorPattern)
add_subdirectory(dynamicBehaviorDemo)
add_subdirectory(factory)
add_subdirectory(iteratorPattern)
add_subdirectory(observer)
add_subdirectory(observerPattern)
add_subdirectory(simulator)
add_subdirectory(strategy)

add_library(design_patternslib empty.cpp)
target_link_libraries(design_patternslib )
