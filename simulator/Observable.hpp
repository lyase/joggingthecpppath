#pragma once

#include "Quackable.hpp"
#include "IQuackObservable.hpp"

#include <vector>

class Observable : public IQuackObservable {
public:
     std::vector<pObserver> observers;
     Quackable* duck;

     Observable(Quackable* duck) : duck(duck) {}

     void registerObserver(pObserver observer) {
          observers.push_back(observer);
     }

     void notifyObservers() {
for(auto observer : observers) {
               observer->update(duck);
          }
     }
};
