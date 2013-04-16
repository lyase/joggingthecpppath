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
*/

#include "ducky/Mallard.hpp"
#include "ducky/Rubber.hpp"
#include "ducky/Decoy.hpp"
#include "ducky/behaviours/Flyable.hpp"
#include "ducky/behaviours/Quackable.hpp"
#include "ducky/behaviours/Squeak.hpp"

void demo(Duck::Base* duck) {
    /// Demo's the capabalities of a duck
    std::cout << "Display: ";
    duck->display();
    std::cout << "Quack: ";
    duck->quack();
    std::cout << "Swim: ";
    duck->swim();
    std::cout << "Fly: ";
    duck->fly();
}

int main(int, char**) {
    std::unique_ptr<Duck::Base> d1(new Duck::Base(nullptr, nullptr));

    demo(d1.get());

    std::cout << std::endl << "... Changing to Mallard ..." << std::endl << std::endl;

    d1.reset(new Duck::Mallard());
    demo(d1.get());

    std::cout << std::endl << "... Changing to CUSTOM Mallard ..." << std::endl << std::endl;

    d1.reset(new Duck::Mallard(new Duck::Behaviour::Squeak));
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
