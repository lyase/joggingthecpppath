/** \file weather.cpp
source file a simplest program illustrating  the observer  pattern as shown in  Head First Design Patterns
By Eric Freeman, Elisabeth Robson, Bert Bates, Kathy Sierra .
Publisher: O'Reilly Media
Released: October 2004

*\n
*\version 1.0
*\date 12/04/13 10:06:50
* Revision: none
* Compiler: gcc
*
*\author:  Matthew and Luli: msherborne@gmail.com
* Company:
* \copyright GNU Public License. \n
* =====================================================================================
*/
#include <iostream>
#include <vector>

#include "weathery/CurrentConditionsDisplay.hpp"
#include "weathery/WeatherData.hpp"
#include "weathery/StatsKeeper.hpp"

/// Takes a callable object, and returns a new std::function that will call that object when that func is called
template <typename T>
weathery::Observer asFunc(T& ob) {
    return [&](double temperature, double humidity, double pressure) {
        ob(temperature, humidity, pressure);
    };
}

int main(int, char**) {
    weathery::LCDDisplay tv;
    weathery::StatsKeeper stats;
    // A list of observers, each will be called when the weather station emits data
    std::vector<weathery::Observer> observers {
        asFunc(tv),
        asFunc(stats),
    };
    // A quick lambda to call every observer in the list
    auto notifyAll = [&](double temperature, double humidity, double pressure) {
        for (auto observer : observers)
            observer(temperature, humidity, pressure);
    };
    weathery::WeatherData data(notifyAll);
    data.setMeasurements(1, 2.2, 3.3);
    data.setMeasurements(10, 20.2, 33.3333333333333333333);
    stats.display();
}
