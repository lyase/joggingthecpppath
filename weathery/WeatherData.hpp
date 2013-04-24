#pragma once

#include "ObserverPattern.hpp"

namespace weathery {

class WeatherData : public ObserverPattern<double, double, double> {
private:
    double temperature;
    double humidity;
    double pressure;
public:
    double getTemperature() const { return temperature; }
    double getHumidity() const { return humidity; }
    double getPressure() const { return pressure; }

    void setMeasurements(double temperature, double humidity, double pressure);
};

}
