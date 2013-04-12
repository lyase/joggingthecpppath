#pragma once

#include <iostream>

namespace Duck {
namespace Behaviour {

struct Flyable {
    void virtual fly() { std::cout << "I'm flying!!!" << std::endl; }
};

}
}
