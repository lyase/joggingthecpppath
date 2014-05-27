#pragma once

#include "Observer.hpp"

class IQuackObservable {
public:
     virtual void registerObserver(pObserver observer) = 0;
     virtual void notifyObservers() = 0;
     virtual ~IQuackObservable() {}
};

