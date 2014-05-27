#pragma once

#include "Beverage.hpp"

namespace coffee {

class HouseBlend : public Beverage {
public:
     const char* description() const;
     double cost() const;
};

}
