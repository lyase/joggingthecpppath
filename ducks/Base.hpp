#pragma once

#include <iostream>

namespace Duck {

struct Base {
    virtual void quack() { std::cout << "Quack" << std::endl; }
    void swim() { std::cout << "Swim" << std::endl; }
    virtual void display() { std::cout << "Duck" << std::endl; }
    void fly() { std::cout << "FLYING!!!" << std::endl; }
}; 

}
