#pragma once
#include <memory>

namespace weathery {

struct Observer {
    virtual void update(double temperature, double humidity, double pressure) = 0;
    virtual ~Observer();
};

typedef std::shared_ptr<Observer> pObserver;

}
