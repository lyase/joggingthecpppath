#pragma once
#include "Light.hpp"
#include "ICommand.hpp"
class FlipUpCommand: public Command {
public:

     FlipUpCommand(Light& light):theLight(light) {

     }

     virtual void execute() {
          theLight.turnOn();
     }

private:
     Light& theLight;
};
