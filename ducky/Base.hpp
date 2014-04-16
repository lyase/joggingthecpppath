#pragma once

#include <iostream>
#include <memory>

#include "behaviours/Flyable.hpp"
#include "behaviours/Quackable.hpp"

namespace Duck {
/*! A Duck class
* \details This  is  a base class( an interface) for ducks .\n
* this project illustrates extending a class \n  crude implementation using inheritance may soon provide  unwanted side effect such as decoy flying just by adding a fly method to the ducks.\n
* now as shown in this library (ducky) using the strategy patern you get build-ins protection against such side effects plus  a dynamic behaviour ( run time!!
*\author:  Matthew and Luli: msherborne@gmail.com
* \version 0.1a
* \date 1990-2013
* \pre First initialize the system.
* \bug this library if used correctly with unique_ptr has no memory leak code checked
* \warning Improper use can crash your application.
* \copyright GNU Public License. \n
*/
class Base {
protected:
     std::unique_ptr<Behaviour::Flyable> flyable;
     std::unique_ptr<Behaviour::Quackable> quackable;
public:
     Base(Behaviour::Flyable* flyable, Behaviour::Quackable* quackable);
     void swim();
     virtual void display();
     void setQuackBehavior(Behaviour::Quackable* newQuack);
     void fly();
     void quack();
};

}
