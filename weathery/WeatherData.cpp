#include "WeatherData.hpp"

namespace weathery {

double WeatherData::getTemperature() { return 1; }
double WeatherData::getHumidity() { return 2; }
double WeatherData::getPressure() { return 3; }

void WeatherData::setMeasurements(double aTemperature, double aHumidity, double aPressure) {
    temperature = aTemperature;
    humidity = aHumidity;
    pressure = aPressure;
    notifyObservers();
}

void WeatherData::measuremntsChanged() {
    notifyObservers();
}

void WeatherData::registerObserver(pObserver o) {
    observers.insert(o);
}

void WeatherData::removeObserver(pObserver o) {
    observers.erase(o);
}

void WeatherData::notifyObservers() const {
    for (auto o : observers)
        o->update(temperature, humidity, pressure);
}

}
