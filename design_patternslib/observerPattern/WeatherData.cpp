#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"

namespace weathery {

void WeatherData::setMeasurements(double temperature, double humidity, double pressure)
{
     notifyAllObservers(temperature, humidity, pressure);
}

}
