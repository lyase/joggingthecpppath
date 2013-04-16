/** \file Mallard.cpp
*source file defining the Mallard  duck class illustrating the behavior pattern as shown in  Head First Design Patterns
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

#include "Mallard.hpp"

#include "behaviours/Flyable.hpp"
#include "behaviours/Quackable.hpp"

namespace Duck {

Mallard::Mallard() : Base(new Behaviour::Flyable(), new Behaviour::Quackable) {}

void Mallard::display() { std::cout << "Mallard" << std::endl; }

}
