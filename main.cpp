/// Implements the Ducks example of the behaviour pattern from the head-first-design patterns book

#include <memory>

#include "ducks/Base.hpp"
#include "ducks/Redhead.hpp"
#include "ducks/Mallard.hpp"
#include "ducks/Rubber.hpp"

int main(int, char**) {
    std::unique_ptr<Duck::Base> d1(new Duck::Base);

    auto demo = [] (Duck::Base* duck) {
        std::cout << "Quack: ";
        duck->quack();
        std::cout << "Swim: ";
        duck->swim();
        std::cout << "Display: ";
        duck->display();
        std::cout << "Fly: ";
        duck->fly();
    };

    demo(d1.get());

    std::cout << std::endl << "... Changing to Mallard ..." << std::endl << std::endl;

    d1.reset(new Duck::Mallard());
    demo(d1.get());

    std::cout << std::endl << "... Changing to Redhead ..." << std::endl << std::endl;

    d1.reset(new Duck::Redhead());
    demo(d1.get());

    std::cout << std::endl << "... Changing to Rubber ..." << std::endl << std::endl;

    d1.reset(new Duck::Rubber());
    demo(d1.get());
}
