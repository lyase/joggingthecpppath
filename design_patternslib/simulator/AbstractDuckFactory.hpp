#pragma once

#include "Quackable.hpp"

#include <memory>

class AbstractDuckFactory {
public:
     virtual pQuackable createMallard() = 0;
     virtual pQuackable createRedheadDuck() = 0;
     virtual pQuackable createDuckCall() = 0;
     virtual pQuackable createRubberDuck() = 0;
};

using pAbstractDuckFactory = std::unique_ptr<AbstractDuckFactory>;
