#pragma once

#include <functional>

namespace weathery {

typedef std::function<void(double, double, double)> Observer;

class WeatherData  {
private:
    double temperature;
    double humidity;
    double pressure;
    Observer observer;
public:
    WeatherData(Observer observer);
    double getTemperature() const;
    double getHumidity() const;
    double getPressure() const;
    void setMeasurements(double temperature, double humidity, double pressure);
};
}
