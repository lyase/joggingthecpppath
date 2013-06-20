#pragma once

#include "Pizza.hpp"
#include "Pizza.hpp"
namespace factory {

class CheezePizza : public factory::Pizza {
public:
    CheezePizza() {};
const char* description() const { return "CheezePizza here"; }
    double cost() const { return 4; }
        double bake() const { return 4; }
                double cut() const { return 4; }
                        double box() const { return 4; }
};

}
