#pragma once
#include "Observer.hpp"

namespace weathery {

class WeatherData;

class LCDDisplay  {
public:
    LCDDisplay();

    // Observer interface
    void showOnLCD(const weathery::WeatherData* data);
};

}
