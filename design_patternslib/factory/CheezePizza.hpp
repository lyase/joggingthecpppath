#pragma once

#include "Pizza.hpp"
#include "Pizza.hpp"
namespace factory {

class CheezePizza : public factory::Pizza {
public:
     CheezePizza() {};
     const char* description() const ;
     double cost() const ;
     double bake() const ;
     double cut() const ;
     double box() const;
};
}
