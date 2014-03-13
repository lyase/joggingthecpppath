#pragma once

#include "DuckCall.hpp"
#include "MallardDuck.hpp"
#include "Quackable.hpp"
#include "RedheadDuck.hpp"
#include "RubberDuck.hpp"
#include "Goose.hpp"
#include "GooseAdaptor.hpp"
#include "QuackCounter.hpp"
#include "AbstractDuckFactory.hpp"
#include "Flock.hpp"
#include "Quackologist.hpp"

#include <cassert>

class DuckSimulator {
public:
     pAbstractDuckFactory factory;
     DuckSimulator(pAbstractDuckFactory factory) : factory {std::move(factory)} {}
     void simulate() {
          assert(factory);
          // Make a Quackologist
          pQuackologist quackologist = pQuackologist(new Quackologist());
          // Make a flock of ducks
          Flock flock;
          flock.add(factory->createDuckCall());
          flock.add(factory->createMallard());
          flock.add(factory->createRedheadDuck());
          flock.add(factory->createRubberDuck());
          // Geese
          flock.add(pQuackable {new GooseAdaptor(Goose())});
          flock.registerObserver(quackologist);

          // Make a family of Mallards
          Flock mallards;
          for(int i=0; i<5; ++i)
               mallards.add(factory->createMallard());

          std::cout << std::endl;
          std::cout << "Duck Simulator: Whole Flock" << std::endl;
          simulate(flock);

          std::cout << std::endl;

          std::cout << "Duck Simulator: Flock of Mallards" << std::endl;
          simulate(mallards);

          std::cout << std::endl;
          std::cout << "The ducks quacked " << QuackCounter::getQuacks() << " times" << std::endl;
     }
     void simulate(Quackable& duck) {
          duck.quack();
     }
};
