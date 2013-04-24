#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"

namespace weathery {

void WeatherData::setMeasurements(double aTemperature, double aHumidity, double aPressure) {
    temperature = aTemperature;
    humidity = aHumidity;
    pressure = aPressure;
    notifyAllObservers(temperature, humidity, pressure);
}

}
