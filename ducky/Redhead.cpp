/** \file Redhead.cpp
*source file defining the Redhead  duck class illustrating the behavior pattern as shown in  Head First Design Patterns
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
#include "Redhead.hpp"

#include "behaviours/Flyable.hpp"
#include "behaviours/Quackable.hpp"

namespace Duck {

Redhead::Redhead() : Base(new Behaviour::Flyable(), new Behaviour::Quackable) {}

void Redhead::display() { std::cout << "Redhead" << std::endl; }

}

