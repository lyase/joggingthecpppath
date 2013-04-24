#include "WeatherData.hpp"

namespace weathery {

double WeatherData::getTemperature() const { return temperature; }
double WeatherData::getHumidity() const { return humidity; }
double WeatherData::getPressure() const { return pressure; }

void WeatherData::setMeasurements(double aTemperature, double aHumidity, double aPressure) {
    temperature = aTemperature;
    humidity = aHumidity;
    pressure = aPressure;

}

}
