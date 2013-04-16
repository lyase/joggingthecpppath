/** \file Base.cpp
*source file defining the base class for duck class illustrating the behavior pattern as shown in  Head First Design Patterns
By Eric Freeman, Elisabeth Robson, Bert Bates, Kathy Sierra
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
#include <iostream>

#include "Base.hpp"

namespace Duck {

Base::Base(Behaviour::Flyable* flyable, Behaviour::Quackable* quackable)
    : flyable(flyable), quackable(quackable)
{
}

void Base::swim() { std::cout << "Swim" << std::endl; }
void Base::display() { std::cout << "Duck" << std::endl; }

void Base::fly() {
    if (flyable)
        flyable->fly();
}

void Base::quack() {
    if (quackable)
        quackable->quack();
}

}
