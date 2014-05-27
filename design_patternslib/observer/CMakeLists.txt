PROJECT(observer)

add_library(observer STATIC WeatherData.cpp Observer.cpp Subject.cpp CurrentConditionsDisplay.cpp StatsKeeper.cpp)
