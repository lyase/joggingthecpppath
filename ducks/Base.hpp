#pragma once

#include <iostream>

namespace Duck {

struct Base {
    void quack() { std::cout << "Quack" << std::endl; }
    void swim() { std::cout << "Swim" << std::endl; }
    void virtual display() { std::cout << "Duck" << std::endl; }
    void fly() { std::cout << "FLYING!!!" << std::endl; }
}; 

}
