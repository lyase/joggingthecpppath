#include "CurrentConditionsDisplay.hpp"

#include <iostream>

namespace weathery {

LCDDisplay::LCDDisplay()  {}

void LCDDisplay::operator()(double temperature, double humidity, double pressure) const {
    std::cout.precision(2);
    std::cout.width(5);
    std::cout << "Temperature: " << temperature << std::endl
              << "Humidity: " << humidity << std::endl
              << "pressure: " << pressure << std::endl;
}

}
