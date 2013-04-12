#pragma once
#include <iostream>
namespace Duck {
/*! A Duck class
* \details This  is  a base class( an interface) for ducks .
*this project illustrastes extending a class can have unwanted side effect such as decoy flying just by adding a fly methode to the ducks.
*\author:  Matthew and Luli: msherborne@gmail.com
* \version 0.1a
* \date 1990-2013
* \pre First initialize the system.
* \bug should be bug free was check with valgrind in prg testUser_Class_dbo.cpp
* \warning Improper use can crash your application.
*
*/
/*! \brief this class defines a Base interface for ducks  of the application
*this class is a minimal duck
*/
class Base {
public:
    void swim();
    virtual void display();
}; 

}
