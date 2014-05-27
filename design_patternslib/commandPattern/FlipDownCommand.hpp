
#pragma once
#include "Light.hpp"
#include "ICommand.hpp"
class FlipDownCommand: public Command {
public:
     FlipDownCommand(Light& light) :theLight(light) {

     }
     virtual void execute() {
          theLight.turnOff();
     }
private:
     Light& theLight;
};
