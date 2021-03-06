/** \file Decoy.cpp
 source file defining the decoy  duck class illustrating the behavior pattern as shown in  Head First Design Patterns
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
*/#include <iostream>

#include "Decoy.hpp"

namespace Duck {

void Decoy::display()
{
     std::cout << "Decoy" << std::endl;
}

}

