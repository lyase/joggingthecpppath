
/** \file  hellotest.cpp
 *    \brief : creating base example for tests 
 *
 * Tests of  controller\n
I will check  i can run a test boost \n
think each test is a use Case (UML Sense)
 *\version:  1.0
 *\date  12/08/13 18:05:21
 *       Revision:  none
 *       Compiler:  gcc
 *
*\author:  Matthew Sherborne (), msherborne@gmail.com & lyase.d, lyase.d@gmail.com
 *        Company:
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
#include <string>
#include <iostream>
#include <stdexcept>
#include <typeinfo> // Pour std::bad_cast
#include <iostream> // Pour std::cerr, etc.
#define BOOST_TEST_MAIN
#if !defined( WIN32 )
#define BOOST_TEST_DYN_LINK
#endif
#include <boost/test/unit_test.hpp>
/*! \fn void testModelForScenario1(IBeatModel* model)
* \brief a simple UML like  scenario:
* scenario1
*
here is in english all that's tested\n
set model speed to 20bpm;\n
increasing the speed i can get the speed upto 60 bpm\n
then decreasing the speed i can get it down to 50 bpm\n
*\return void
*\param model  an IBeatModel to be tested
*/

BOOST_AUTO_TEST_CASE( test__bb_recorder_for_scenario1 )
{
    BOOST_CHECK_EQUAL(1, 1);
}

BOOST_AUTO_TEST_CASE( Second_test_Name_No_SpaceAllowed )
{
    BOOST_CHECK_EQUAL(1, 1);
}
