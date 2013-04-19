#include "CurrentConditionsDisplay.hpp"

#include "Subject.hpp"

#include <iostream>

namespace weathery {

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject& subject) : Observer(subject) {}

void CurrentConditionsDisplay::update(double temperature, double humidity, double pressure) {
    std::cout.precision(2);
    std::cout.width(5);
    std::cout << "Temperature: " << temperature << std::endl
              << "Humidity: " << humidity << std::endl
              << "pressure: " << pressure << std::endl;
}

}
