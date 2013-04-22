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

#include "weathery/WeatherData.hpp"
#include "weathery/CurrentConditionsDisplay.hpp"

int main(int, char**) {
    weathery::WeatherData data;
    weathery::CurrentConditionsDisplay tv(data);

    data.setMeasurements(1, 2.2, 3.3);
    data.setMeasurements(10, 20.2, 33.3333333333333333333);
}
