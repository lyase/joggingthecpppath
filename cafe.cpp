#include <iostream>
#include <vector>

#include "coffee/HouseBlend.hpp"
#include "coffee/DarkRoast.hpp"
#include "coffee/Decaf.hpp"
#include "coffee/Espresso.hpp"

int main(int, char**)
{
     std::vector<coffee::Beverage*> coffees;
     coffees.push_back(new coffee::HouseBlend);
     coffees.push_back(new coffee::DarkRoast);
     coffees.push_back(new coffee::Decaf);
     coffees.push_back(new coffee::Espresso);

for (auto drink : coffees)
          std::cout << drink->description() << ": " << drink->cost() << std::endl;
}
