#pragma once

#include "Base.hpp"
#include "behaviours/Quackable.hpp"

namespace Duck {

class Mallard : public Base {
public:
     Mallard(Behaviour::Quackable* quack=nullptr);
     void virtual display();
     void virtual setBehavior(Behaviour::Quackable* );
};

}
