#pragma once

namespace coffee {

class Beverage {
public:
     virtual ~Beverage();
     virtual const char* description() const = 0;
     virtual double cost() const = 0;
};

}
