#pragma once

#include "Observer.hpp"

#include <iostream>
#include <memory>

class Quackologist : public Observer {
public:
     void update(IQuackObservable* duck) {
          std::cout << "Quackologist: " << duck << " just quacked." << std::endl;
     }
};

using pQuackologist = std::shared_ptr<Quackologist>;
