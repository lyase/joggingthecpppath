/// Implements the Ducks example of the behaviour pattern from the head-first-design patterns book

#include <iostream>
#include <memory>

struct Duck {
    void quack() { std::cout << "Quack" << std::endl; }
    void swim() { std::cout << "Swim" << std::endl; }
    void virtual display() { std::cout << "Duck" << std::endl; }
}; 

struct Mallard : public Duck {
    void virtual display() { std::cout << "Mallard" << std::endl; }
};

struct RedheadDuck : public Duck {
    void virtual display() { std::cout << "Redhead" << std::endl; }
};

int main(int, char**) {
    std::unique_ptr<Duck> d1(new Duck);
    d1->quack();
    d1->swim();
    d1->display();

    std::cout << "Changing to Mallard" << std::endl;

    d1.reset(new Mallard());
    d1->quack();
    d1->swim();
    d1->display();

    std::cout << "Changing to Redhead" << std::endl;

    d1.reset(new RedheadDuck());
    d1->quack();
    d1->swim();
    d1->display();
}
