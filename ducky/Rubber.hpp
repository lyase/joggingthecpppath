#pragma once

#include "Base.hpp"
#include "behaviours/Flyable.hpp"
#include "behaviours/Quackable.hpp"

namespace Duck {

class Rubber : public Base, public Behaviour::Quackable {
public:
    void virtual display();
    void virtual quack();
};

}
