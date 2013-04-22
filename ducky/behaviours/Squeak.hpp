#pragma once

#include "Quackable.hpp"

namespace Duck {
namespace Behaviour {
/*! A Squeak class
* \details This class is a Quack behaviour which can be used at run Time by any duck that wants to print to std::cout "squeak" when quacking
*\author:  Matthew and Luli: msherborne@gmail.com
* \version 4.1a
* \date 1990-2011
* \pre First initialize the system.
* \bug  bug free implementation
* \warning Improper use can crash your application use unique_ptr to reduce memory leaks.
*
*/
class Squeak : public Quackable {
    void quack();
};

}
}

