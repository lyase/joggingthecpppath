#pragma once

#include "Beverage.hpp"

namespace coffee {

class DarkRoast : public Beverage {
public:
     const char* description() const ;
     double cost() const;
};

}
