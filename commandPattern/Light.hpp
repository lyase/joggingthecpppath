#pragma once
#include <iostream>
using namespace std;
/*Receiver class*/
class Light {

public:
     Light() {  }

     void turnOn() {
          cout << "The light is on" << endl;
     }

     void turnOff() {
          cout << "The light is off" << endl;
     }
};
