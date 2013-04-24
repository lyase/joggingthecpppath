#pragma once
#include "CurrentConditionsDisplay.hpp"

namespace weathery {
class WeatherData  {
private:
    double temperature;
    double humidity;
    double pressure;
    LCDDisplay& display;
public:
    WeatherData(LCDDisplay& display);
    double getTemperature() const;
    double getHumidity() const;
    double getPressure() const;
    void setMeasurements(double temperature, double humidity, double pressure);
};
}
