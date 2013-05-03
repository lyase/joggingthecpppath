#pragma once

#include "Pizza.hpp"
#include "Pizza.hpp"
namespace factory {

class CheezePizza : public factory::Pizza {
public:
    CheezePizza() {};
const char* description() const { return "CheezePizza here"; }
    double cost() const;
};

}
