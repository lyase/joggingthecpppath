/// Implements the Ducks example of the behaviour pattern from the head-first-design patterns book

#include <memory>
#include <iostream>

#include "strategy/Base.hpp"
#include "strategy/Redhead.hpp"
/** \file main.cpp
*source file defining a main application illustrating the strategy pattern as shown in  Head First Design Patterns
By Eric Freeman, Elisabeth Robson, Bert Bates, Kathy Sierra .
a crude implementation of the duck familly with inheritance will have Decoy flying as side effect.
Using the strategy  pattern  as illustrated in our library ducky side effect are limited.
this example shown how a demo function coded to an interface  can then be used for any object of the duck familly Mallard, Redhead, Rubber Decoy...
it also shows how to change dynamically properties of the Mallard duck with no memory leaks!!!
all the ducks an their related behavior are implemented in the ducky lib.

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

#include "strategy/Mallard.hpp"
#include "strategy/Rubber.hpp"
#include "strategy/Decoy.hpp"
#include "strategy/behaviours/Flyable.hpp"
#include "strategy/behaviours/Quackable.hpp"
#include "strategy/behaviours/Squeak.hpp"
/*! \fn void demo(Duck::Base* duck)
* \brief A demo function for any object implementing the duck interface
*  will call display quack swim and fly on the incomming object
*
* \param duck  .
*/

void demo(Duck::Base* duck)
{
     /// Demo's the capabalities of any duck
     std::cout << "Display: ";
     duck->display();
     std::cout << "Quack: ";
     duck->quack();
     std::cout<<std::endl;
     std::cout << "Swim: ";
     duck->swim();
     std::cout<<std::endl;
     std::cout << "Fly: ";
     duck->fly();
     std::cout<<std::endl;
}

int main(int, char**)
{
     std::unique_ptr<Duck::Base> d1(new Duck::Base(nullptr, nullptr));
     std::unique_ptr<Duck::Behaviour::Quackable>mbehaviour ( new Duck::Behaviour::Squeak());
     demo(d1.get());

     std::cout << std::endl << "... Changing to Mallard ..." << std::endl << std::endl;

     d1.reset(new Duck::Mallard());
     demo(d1.get());
     std::cout << std::endl << "... Changing at runTime behaviour of Mallard ..." << std::endl << std::endl;
     mbehaviour.reset(new Duck::Behaviour::Squeak());
     d1.get()->setQuackBehavior(mbehaviour.get());
     demo(d1.get());

     std::cout << std::endl << "... Changing to CUSTOM Mallard ..." << std::endl << std::endl;

     d1.reset(new Duck::Mallard(new Duck::Behaviour::Squeak()));
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
