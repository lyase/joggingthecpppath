#include "StatsKeeper.hpp"

#include <iostream>

namespace weathery {

void StatsKeeper::operator()(double temperature, double humidity, double pressure)
{
     history.push_back( {temperature, humidity, pressure});
}

void StatsKeeper::display() const
{
     double sumTemp=0,
            sumHum=0,
            sumPressure=0;
for (auto entry : history) {
          sumTemp += entry.temperature;
          sumHum += entry.humidity;
          sumPressure += entry.pressure;
     }
     std::cout << "Average temperature: " << (sumTemp/history.size()) << std::endl
               << "Average humidity: " << (sumHum/history.size()) << std::endl
               << "Average pressure: " << (sumPressure/history.size()) << std::endl;
}


} // namespace weathery
