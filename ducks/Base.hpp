#pragma once

#include <iostream>

namespace Duck {

class Base {
public:
    void swim() { std::cout << "Swim" << std::endl; }
    virtual void display() { std::cout << "Duck" << std::endl; }
}; 

}
