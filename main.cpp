/// Implements the Ducks example of the behaviour pattern from the head-first-design patterns book

#include <memory>

#include "ducks/Base.hpp"
#include "ducks/Redhead.hpp"
#include "ducks/Mallard.hpp"

int main(int, char**) {
    std::unique_ptr<Duck::Base> d1(new Duck::Base);
    d1->quack();
    d1->swim();
    d1->display();

    std::cout << std::endl << "... Changing to Mallard ..." << std::endl << std::endl;

    d1.reset(new Duck::Mallard());
    d1->quack();
    d1->swim();
    d1->display();

    std::cout << std::endl << "... Changing to Redhead ..." << std::endl << std::endl;

    d1.reset(new Duck::Redhead());
    d1->quack();
    d1->swim();
    d1->display();
}
