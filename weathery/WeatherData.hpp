#pragma once
#include "Subject.hpp"
#include "Observer.hpp"
#include <set>

namespace weathery {
class WeatherData  {
private:
    double temperature;
    double humidity;
    double pressure;

public:
    double getTemperature();
    double getHumidity();
    double getPressure();
    void setMeasurements(double temperature, double humidity, double pressure);
    void WorldChangedGoGetNewValue();
};
}
