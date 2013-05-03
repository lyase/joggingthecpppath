#include <iostream>
#include <vector>
#include <memory>
#include <iostream>
#include "factory/Pizza.hpp"
#include "factory/CheezePizza.hpp"
int main(int, char**) {
//    std::unique_ptr<factory::CheezePizza> d1(new factory::CheezePizza());
    factory::Pizza* aPizza;
    aPizza= new factory::CheezePizza ;
    std::cout <<  "i am testing a CheezePizza as a pizza " << aPizza->description() << std::endl;
}
