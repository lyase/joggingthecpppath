#pragma once
#include "Observer.hpp"

namespace weathery {

class Subject {
public:
     virtual void registerObserver(pObserver) = 0;
     virtual void removeObserver(pObserver) = 0;
     virtual void notifyObservers() const = 0;
     virtual ~Subject();
};

}
