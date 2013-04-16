/// Implements the Ducks example of the behaviour pattern from the head-first-design patterns book

#include <memory>
#include <iostream>

#include "ducky/Base.hpp"
#include "ducky/Redhead.hpp"
/** \file main.cpp
*source file defining the Redhead  duck class illustrating the behavior pattern as shown in  Head First Design Patterns
By Eric Freeman, Elisabeth Robson, Bert Bates, Kathy Sierra .
a crude implementation of the duck familly with inheritance will have Decoy flying as side effect using the behavior pattern side effect are limited.
or a solution with multiple inheritance  you can add functionalities to a class adding a new behevior interface
Publisher: O'Reilly Media
Released: October 2004

*\n
*\version 1.0
*\date 12/04/13 10:06:50
* Revision: none
* Compiler: gcc
*
*\author:  Matthew and Luli: msherborne@gmail.com
* Company:
*
* =====================================================================================
*/#include "ducky/Mallard.hpp"
#include "ducky/Rubber.hpp"
#include "ducky/Decoy.hpp"
#include "ducky/behaviours/Flyable.hpp"
#include "ducky/behaviours/Quackable.hpp"

void demo(Duck::Base* duck) {
    /// Demo's the capabalities of a duck
    std::cout << "Display: ";
    duck->display();
    auto quacks = dynamic_cast<Duck::Behaviour::Quackable*>(duck);
    if (quacks != nullptr) {
        std::cout << "Quack: ";
        quacks->quack();
    }
    std::cout << "Swim: ";
    duck->swim();
    auto flies = dynamic_cast<Duck::Behaviour::Flyable*>(duck);
    if (flies != nullptr) {
        std::cout << "Fly: ";
        flies->fly();
    }
}

int main(int, char**) {
    std::unique_ptr<Duck::Base> d1(new Duck::Base);

    demo(d1.get());

    std::cout << std::endl << "... Changing to Mallard ..." << std::endl << std::endl;

    d1.reset(new Duck::Mallard());
    demo(d1.get());

    std::cout << std::endl << "... Changing to Redhead ..." << std::endl << std::endl;

    d1.reset(new Duck::Redhead());
    demo(d1.get());

    std::cout << std::endl << "... Changing to Rubber ..." << std::endl << std::endl;

    d1.reset(new Duck::Rubber());
    demo(d1.get());

    std::cout << std::endl << "... Changing to Decoy ..." << std::endl << std::endl;

    d1.reset(new Duck::Decoy());
    demo(d1.get());
}

