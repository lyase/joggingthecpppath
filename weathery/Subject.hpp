#pragma once
#include "Observer.hpp"

namespace weathery {

struct Subject {
    virtual void registerObserver(pObserver) = 0;
    virtual void removeObserver(pObserver) = 0;
    virtual void notifyObservers() = 0;
    virtual ~Subject();
};

}
