#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"

namespace weathery {

WeatherData::WeatherData(Observer observer) : observer(observer) {}

double WeatherData::getTemperature() const { return temperature; }
double WeatherData::getHumidity() const { return humidity; }
double WeatherData::getPressure() const { return pressure; }

void WeatherData::setMeasurements(double aTemperature, double aHumidity, double aPressure) {
    temperature = aTemperature;
    humidity = aHumidity;
    pressure = aPressure;
    observer(temperature, humidity, pressure);
}

}
