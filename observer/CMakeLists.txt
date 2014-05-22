PROJECT(observerPattern)

add_library(observerPattern STATIC WeatherData.cpp Observer.cpp Subject.cpp CurrentConditionsDisplay.cpp StatsKeeper.cpp)
