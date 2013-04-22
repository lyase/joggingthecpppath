#pragma once

#include "Base.hpp"

namespace Duck {
/*! A Decoy class
* \details This class should never fly.\n no matter how you change other duck or even the duck base class
* as shown in this project these object will never fly keeping it's intended behaviour unless you knowingly set a fly behavior at run time!!
*\author:  Matthew and Luli: msherborne@gmail.com
* \version 4.1a
* \date 1990-2013
* \pre First initialize the system.
* \bug  bug free implementation
* \warning Improper use can crash your application use unique_ptr to reduce memory leaks.
* \copyright GNU Public License. \n
*/
class Decoy : public Base {
public:
    Decoy() : Base(nullptr, nullptr) {}
    void virtual display();
};

}
