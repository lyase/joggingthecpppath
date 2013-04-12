#pragma once

#include <iostream>

#include "Base.hpp"

namespace Duck {

struct Mallard : public Base {
    void virtual display() { std::cout << "Mallard" << std::endl; }
};

}
