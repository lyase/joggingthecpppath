#pragma once

#include <iostream>

#include "Base.hpp"

namespace Duck {

struct Rubber : public Base {
    void virtual display() { std::cout << "Rubber" << std::endl; }
    void virtual quack() { std::cout << "Squeak" << std::endl; }
    virtual void fly() { std::cout << "Throw me first dude! I'm made of rubber" << std::endl; }
};

}
