#pragma once

namespace weathery {

class LCDDisplay  {
public:
    LCDDisplay();

    // Observer interface
    void showOnLCD(double temperature, double humidity, double pressure);
};

}
