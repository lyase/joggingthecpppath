#include <iostream>

#include "weathery/WeatherData.hpp"
#include "weathery/CurrentConditionsDisplay.hpp"

int main(int, char**) {
    weathery::WeatherData data;
    weathery::CurrentConditionsDisplay tv(data);

    data.setMeasurements(1, 2.2, 3.3);
    data.setMeasurements(10, 20.2, 33.3333333333333333333);
}
