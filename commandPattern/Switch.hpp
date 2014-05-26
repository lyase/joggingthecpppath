#include "FlipDownCommand.hpp"
#include "ICommand.hpp"
#include "FlipUpCommand.hpp"
class Switch {
public:
     Switch(Command& flipUpCmd, Command& flipDownCmd)
          :flipUpCommand(flipUpCmd),flipDownCommand(flipDownCmd) {

     }

     void flipUp() {
          flipUpCommand.execute();
     }

     void flipDown() {
          flipDownCommand.execute();
     }

private:
     Command& flipUpCommand;
     Command& flipDownCommand;
};
