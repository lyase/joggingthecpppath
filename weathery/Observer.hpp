#pragma once
#include <memory>

namespace weathery {

class Subject;

class Observer {
private:
    Subject& subject;
public:
    virtual void update(double temperature, double humidity, double pressure) = 0;
    Observer(Subject&);
    virtual ~Observer();
};

typedef Observer* pObserver;

}
