/** \file  main.cpp
 this is main of a duck simulator application build using design patterns  see the book  head First design patterns
 it illustrates the power of the adaptor pattern (goose can become a duck )
 (the quacks can be counted)( adaptor pattern + the factory pattern)

*\n
*
 *\version  1.0
 *\date 01/05/12 10:06:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *\author:  lyase.d, lyase.d@gmail.com and Matthew Sherborne (), msherborne@gmail.com
 *        Company:
 *
 * =====================================================================================
 */#include <iostream>

#include "simulator/DuckSimulator.hpp"
#include "simulator/DuckFactories.hpp"

int main(int argc, char** argv)
{
     DuckSimulator simulator(countingFactory());
     //DuckSimulator simulator(normalFactory());
     //DuckSimulator simulator(pAbstractDuckFactory{}); // Test the assertion in the simulator
     simulator.simulate();
}
