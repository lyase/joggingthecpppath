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

#include "weathery/CurrentConditionsDisplay.hpp"
#include "weathery/WeatherData.hpp"

int main(int, char**) {
    weathery::LCDDisplay tv;
    auto observer = [&](double temperature, double humidity, double pressure) {
        tv.showOnLCD(temperature, humidity, pressure);
    };
    weathery::WeatherData data(observer);
    data.setMeasurements(1, 2.2, 3.3);
    data.setMeasurements(10, 20.2, 33.3333333333333333333);
}
