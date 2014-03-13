#pragma once
#include "Quackable.hpp"
#include "Observable.hpp"

#include <iostream>

class DuckCall : public Quackable {
private:
     Observable observable;
public:
     DuckCall() : observable {this} {}
     virtual void quack() override final {
          std::cout << "Kwak" << std::endl;
          notifyObservers();
     }

     void registerObserver(pObserver observer) {
          observable.registerObserver(observer);
     }

     void notifyObservers() {
          observable.notifyObservers();
     }
};


