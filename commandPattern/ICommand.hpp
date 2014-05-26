#pragma once
#include <iostream>

using namespace std;

/*the Command interface*/
class Command {
public:
     virtual void execute()=0;
};
