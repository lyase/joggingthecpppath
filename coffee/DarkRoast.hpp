#pragma once

#include "Beverage.hpp"

namespace coffee {

class DarkRoast : public Beverage {
public:
    const char* description() const { return "Dark Roast"; }
    double cost() const;
};

}
