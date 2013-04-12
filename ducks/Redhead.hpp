#pragma once

#include <iostream>

#include "Base.hpp"

namespace Duck {

struct Redhead : public Base {
    void virtual display() { std::cout << "Redhead" << std::endl; }
};

}
