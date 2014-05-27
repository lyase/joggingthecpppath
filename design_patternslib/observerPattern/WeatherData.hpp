#pragma once

#include "ObserverPattern.hpp"

namespace weathery {

class WeatherData : public ObserverPattern<double, double, double> {
public:
     void setMeasurements(double temperature, double humidity, double pressure);
};

}
