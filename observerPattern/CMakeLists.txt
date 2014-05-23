PROJECT(observerPattern)

add_library(weathery STATIC WeatherData.cpp Observer.cpp Subject.cpp CurrentConditionsDisplay.cpp StatsKeeper.cpp)
