#pragma once
#include "Quackable.hpp"
#include "Observable.hpp"

#include <iostream>

class RubberDuck : public Quackable {
private:
     Observable observable;
public:
     RubberDuck() : observable {this} {}

     virtual void quack() override final {
          std::cout << "Squeak" << std::endl;
          notifyObservers();
     }

     void registerObserver(pObserver observer) {
          observable.registerObserver(observer);
     }

     void notifyObservers() {
          observable.notifyObservers();
     }
};

