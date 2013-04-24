#include "CurrentConditionsDisplay.hpp"

#include "WeatherData.hpp"

#include <iostream>

namespace weathery {

LCDDisplay::LCDDisplay()  {}

void LCDDisplay::showOnLCD(const weathery::WeatherData* data) {
    std::cout.precision(2);
    std::cout.width(5);
    std::cout << "Temperature: " << data->getTemperature() << std::endl
              << "Humidity: " << data->getHumidity() << std::endl
              << "pressure: " << data->getPressure() << std::endl;
}

}
