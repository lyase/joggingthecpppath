#pragma once
#include "Quackable.hpp"
#include "Observable.hpp"

#include <iostream>

class MallardDuck : public Quackable {
public:
     Observable observable;

     MallardDuck() : observable {this} {}

     virtual void quack() override final {
          std::cout << "Quack" << std::endl;
          notifyObservers();
     }

     void registerObserver(pObserver observer) {
          observable.registerObserver(observer);
     }

     void notifyObservers() {
          observable.notifyObservers();
     }
};

