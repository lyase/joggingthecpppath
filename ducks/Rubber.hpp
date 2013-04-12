#pragma once

#include <iostream>

#include "Base.hpp"
#include "behaviours/Flyable.hpp"
#include "behaviours/Quackable.hpp"

namespace Duck {

class Rubber : public Base, public Behaviour::Quackable {
public:
    void virtual display() { std::cout << "Rubber" << std::endl; }
    void virtual quack() { std::cout << "Squeak" << std::endl; }
};

}
