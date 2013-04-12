#pragma once

#include <iostream>

#include "Base.hpp"
#include "behaviours/Flyable.hpp"
#include "behaviours/Quackable.hpp"

namespace Duck {

class Mallard : public Base, public Behaviour::Flyable, public Behaviour::Quackable {
public:
    void virtual display() { std::cout << "Mallard" << std::endl; }
};

}
