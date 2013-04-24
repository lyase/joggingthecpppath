#pragma once

namespace weathery {

class LCDDisplay  {
public:
    LCDDisplay();

    // Observer interface
    void operator()(double temperature, double humidity, double pressure);
};

}
