#pragma once

namespace weathery {
class WeatherData  {
private:
    double temperature;
    double humidity;
    double pressure;
public:
    double getTemperature() const;
    double getHumidity() const;
    double getPressure() const;
    void setMeasurements(double temperature, double humidity, double pressure);
};
}
