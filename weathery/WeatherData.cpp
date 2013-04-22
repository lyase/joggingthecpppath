#include "WeatherData.hpp"

namespace weathery {

double WeatherData::getTemperature() { return 1; }
double WeatherData::getHumidity() { return 2; }
double WeatherData::getPressure() { return 3; }

void WeatherData::setMeasurements(double aTemperature, double aHumidity, double aPressure) {
    temperature = aTemperature;
    humidity = aHumidity;
    pressure = aPressure;

}

void WeatherData::WorldChangedGoGetNewValue() {
    temperature = getTemperature();
    humidity = getHumidity();
    pressure = getPressure();

}


}
