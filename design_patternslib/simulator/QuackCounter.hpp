#pragma once

#include "Quackable.hpp"
#include "Observable.hpp"

#include <memory>

class QuackCounter : public Quackable {
private:
     std::unique_ptr<Quackable> duck;
     static int numberOfQuacks;
     Observable observable;
public:
     QuackCounter(Quackable* duck) : duck {duck}, observable {this} {}
     ~QuackCounter() {}

     virtual void quack() override {
          duck->quack();
          ++numberOfQuacks;
          notifyObservers();
     }

     static int getQuacks() {
          return numberOfQuacks;
     }

     void registerObserver(pObserver observer) {
          observable.registerObserver(observer);
     }

     void notifyObservers() {
          observable.notifyObservers();
     }
};

