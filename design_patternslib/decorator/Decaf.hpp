#pragma once

#include "Beverage.hpp"

namespace coffee {

class Decaf : public Beverage {
public:
     const char* description() const ;
     double cost() const;
};

}
