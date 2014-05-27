/*
 * =====================================================================================
 *
 *       Filename:  RedheadDuck.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  23/07/13 17:45:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Matthew Sherborne (), msherborne@gmail.com
 *        Company:
 *
 * =====================================================================================
 */

#pragma once
#include "Quackable.hpp"

#include <iostream>
/* ! A RedheadDuck    class
 * * \details This class is  an interface for quackable animals
 * this is a c++ version of the miniduckSimulator (java) for head first design pattern
 * follow the commit see refactoring in practice and the patterns emerges
 * * \author mattew sherborne
 * * \version 0.1a
 * * \date 1990-2013
 * * \pre First initialize the system.
 * * \bug .
 * *
 * */
/* ! \brief  this class defines a User object  of the application
 *      */
class RedheadDuck : public Quackable {
private:
     Observable observable;
public:
     RedheadDuck() : observable {this} {}
     virtual void quack() override final {
          std::cout << "Quack" << std::endl;
          notifyObservers();
     }

     void registerObserver(pObserver observer) {
          observable.registerObserver(observer);
     }
     void notifyObservers() {
          observable.notifyObservers();
     }
};

