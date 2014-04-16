#pragma once

#include "Beverage.hpp"

namespace coffee {

class Espresso : public Beverage {
public:
     const char* description() const ;
     double cost() const;
};

}
