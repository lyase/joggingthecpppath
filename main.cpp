/// Implements the Ducks example of the behaviour pattern from the head-first-design patterns book

#include <memory>

#include "ducks/Base.hpp"
#include "ducks/Redhead.hpp"
#include "ducks/Mallard.hpp"
#include "ducks/Rubber.hpp"
#include "ducks/Decoy.hpp"
#include "ducks/behaviours/Flyable.hpp"
#include "ducks/behaviours/Quackable.hpp"

int main(int, char**) {
    std::unique_ptr<Duck::Base> d1(new Duck::Base);

    auto demo = [] (Duck::Base* duck) {
        std::cout << "Display: ";
        duck->display();
        auto quacks = dynamic_cast<Duck::Behaviour::Quackable*>(duck);
        if (quacks != nullptr) {
            std::cout << "Quack: ";
            quacks->quack();
        }
        std::cout << "Swim: ";
        duck->swim();
        auto flies = dynamic_cast<Duck::Behaviour::Flyable*>(duck);
        if (flies != nullptr) {
            std::cout << "Fly: ";
            flies->fly();
        }
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

    std::cout << std::endl << "... Changing to Decoy ..." << std::endl << std::endl;

    d1.reset(new Duck::Decoy());
    demo(d1.get());
}

