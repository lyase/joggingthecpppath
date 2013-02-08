/** \file greet.cpp
   * \brief A brief file description of greet.cpp
    * A more elaborated file description.
    * using latex tricks in this file
 The distance between \f$(x_1,y_1)\f$ and \f$(x_2,y_2)\f$ is 
  \f$\sqrt{(x_2-x_1)^2+(y_2-y_1)^2}\f$.
* and \n
* more documention if needed on new line
* tghis is a hello world in c++ part of the \b joggingthecpppath project 
 .\n
* \b compiles with \code gcc greep.c  -o prg \endcode \n
* \b generate  documentation  with
* \code  make doc \endcode \n
* or directly 
* \code doxygen  Doxyfile \endcode \n 
*  always test code quality for memory leaks !!
\code valgrind --leak-check=full ./prg \endcode \n
* this complete documentation is followed by autor version and date tags\n
* \author lyase damasked
* \version 0.1
* \date 26 jan 2013
* \bug       None known to date \n
* \copyright GNU Public License. \n
* =====================================================================================
*/
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

main(int argc, char *argv[])
{
    unsigned long i = 0;

    while (++i < sizeof(unsigned long)) {
        std::string filename;
        {
            std::stringstream s;
            s << i << ".txt";
            filename = "users/" + s.str();
        }
        std::cout << "Reading " << filename << " ...";
        std::fstream f;
        f.open(filename.c_str(), std::ios_base::in);
        if (f.bad())
            break;
        std::string username;
        std::getline(f, username);
        std::cout << "hello, how are you " << username << " ? I am a prg compiled on :  "__DATE__ << std::endl;
        std::cout << "DEBUGINFO  in file:" << __FILE__ << " at LINE:"<< __LINE__ <<"  binary compiled on : "<< __DATE__<<" at: "<< __TIME__<<std::endl;
    }
    return 0;
}

