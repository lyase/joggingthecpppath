#pragma once
#include "Observer.hpp"

namespace weathery {

class Subject;

class CurrentConditionsDisplay  : public Observer {
public:
    CurrentConditionsDisplay(Subject& subject);

    // Observer interface
    void update(double temperature, double humidity, double pressure);
};

}
