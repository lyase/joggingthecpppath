#include "CurrentConditionsDisplay.hpp"

#include <iostream>

namespace weathery {

LCDDisplay::LCDDisplay()  {}

void LCDDisplay::showOnLCD(double temperature, double humidity, double pressure) {
    std::cout.precision(2);
    std::cout.width(5);
    std::cout << "Temperature: " << temperature << std::endl
              << "Humidity: " << humidity << std::endl
              << "pressure: " << pressure << std::endl;
}

}
