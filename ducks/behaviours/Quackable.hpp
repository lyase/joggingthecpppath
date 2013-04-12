#pragma once

#include <iostream>

namespace Duck {
namespace Behaviour {

struct Quackable {
    void virtual quack() { std::cout << "Quack" << std::endl; }
};

}
}
