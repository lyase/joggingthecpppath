#pragma once
#include "Observer.hpp"
#include "WeatherData.hpp"

namespace weathery {

class LCDDisplay  {
public:
    LCDDisplay();

    // Observer interface
    void update(double temperature, double humidity, double pressure);
    void showOnLCD(weathery::WeatherData data);
};

}
