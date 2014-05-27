#include <iostream>
#include "../commandPattern/Light.hpp"
#include "../commandPattern/FlipDownCommand.hpp"
#include "../commandPattern/FlipUpCommand.hpp"
#include "../commandPattern/Switch.hpp"
using namespace std;

/*The test class or client*/
int main()
{
     Light lamp;
     FlipUpCommand switchUp(lamp);
     FlipDownCommand switchDown(lamp);

     Switch s(switchUp, switchDown);
     s.flipUp();
     s.flipDown();
}
