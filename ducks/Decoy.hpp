#pragma once

#include <iostream>

#include "Base.hpp"

namespace Duck {

class Decoy : public Base {
public:
    void virtual display() { std::cout << "Decoy" << std::endl; }
};

}
