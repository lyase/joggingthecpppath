#pragma once
#include "Subject.hpp"
#include "Observer.hpp"

#include <set>

namespace weathery {

class WeatherData : public Subject {
private:
    double temperature;
    double humidity;
    double pressure;
    std::set<pObserver> observers;
public:
    double getTemperature();
    double getHumidity();
    double getPressure();

    void setMeasurements(double temperature, double humidity, double pressure);
    void measuremntsChanged();

    // Subject Implementation
    void registerObserver(pObserver);
    void removeObserver(pObserver);
    void notifyObservers() const;
};

}
