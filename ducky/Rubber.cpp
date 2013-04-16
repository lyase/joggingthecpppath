#include <iostream>

#include "Rubber.hpp"

#include "behaviours/Squeak.hpp"

namespace Duck {

Rubber::Rubber() : Base(nullptr, new Behaviour::Squeak()) {}
void Rubber::display() { std::cout << "Rubber" << std::endl; }

}
