#pragma once

#include "Base.hpp"

namespace Duck {
/*! A Decoy class
* \details This class is used to demonstrate side effects if intuitively implemented as a child of duck class it will start flying once duck have a fly method implemented.
* \author John Doe
* \version 4.1a
* \date 1990-2011
* \pre First initialize the system.
* \bug should be bug free was check with valgrind in prg testUser_Class_dbo.cpp
* \warning Improper use can crash your application.
*
*/
/*! \brief this class defines a User object of the application
*this class now has Posts as children
*/
class Decoy : public Base {
public:
    void virtual display();
};

}
