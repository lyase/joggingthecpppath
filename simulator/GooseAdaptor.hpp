#pragma once

#include "Quackable.hpp"
#include "Goose.hpp"

class GooseAdaptor : public Quackable {
private:
     Goose goose;
     Observable observable;
public:
     GooseAdaptor(const Goose& goose) : goose(goose), observable(this) {}

     virtual void quack() override {
          goose.honk();
          notifyObservers();
     }

     void registerObserver(pObserver observer) {
          observable.registerObserver(observer);
     }

     void notifyObservers() {
          observable.notifyObservers();
     }
};
