#include <iostream>
#include <vector>
#include <memory>
#include <iostream>
#include "factory/Pizza.hpp"
#include "factory/CheezePizza.hpp"
#include "factory/pizzashop.hpp"
int main(int, char**)
{
//    std::unique_ptr<factory::CheezePizza> d1(new factory::CheezePizza());
     factory::Pizza* aPizza;
     aPizza= new factory::CheezePizza ;
     std::cout <<  "i am testing a CheezePizza as a pizza " << aPizza->description() << std::endl;
     std::cout <<  "i can bake cut box  a CheezePizza as a pizza " << aPizza->bake() << std::endl;
     std::cout <<  "i can bake cut box  a CheezePizza as a pizza " << aPizza->cut() << std::endl;
     std::cout <<  "i can bake cut box  a CheezePizza as a pizza " << aPizza->box() << std::endl;

}
