#pragma once


#include <memory>

class IQuackObservable;

class Observer {
public:
     virtual void update(IQuackObservable*) = 0;
     virtual ~Observer() {}
};

using pObserver = std::shared_ptr<Observer>;
