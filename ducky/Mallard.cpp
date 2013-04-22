/** \file Mallard.cpp
source file defining the Mallard  duck class illustrating the behavior pattern as shown in  Head First Design Patterns
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
* \copyright GNU Public License. \n
* =====================================================================================
*/

#include "Mallard.hpp"

#include "behaviours/Flyable.hpp"

namespace Duck {

namespace Behaviour {

class MallardQuack : public Quackable {
    void quack() { std::cout << "I quack like a Mallard" << std::endl; }
};

}
void Mallard::setBehavior(Behaviour::Quackable* quack)
{
    quackable.reset(quack);
}

Mallard::Mallard(Behaviour::Quackable* quack) : Base(new Behaviour::Flyable(), quack ? quack : new Behaviour::MallardQuack) {}

void Mallard::display() { std::cout << "Mallard" << std::endl; }

}
