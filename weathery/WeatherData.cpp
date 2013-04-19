#include "WeatherData.hpp"

namespace weathery {

double WeatherData::getTemperature() { return 1; }
double WeatherData::getHumidity() { return 2; }
double WeatherData::getPressure() { return 3; }

void WeatherData::measuremntsChanged() {
    double temp(getTemperature());
    double humidity(getHumidity());
    double pressure(getPressure());


}

}
