#include "DuckFactories.hpp"
#include "AbstractDuckFactory.hpp"
#include "MallardDuck.hpp"
#include "RedheadDuck.hpp"
#include "DuckCall.hpp"
#include "RubberDuck.hpp"

class DuckFactory : public AbstractDuckFactory {
public:
     virtual pQuackable createMallard() override {
          return pQuackable {new MallardDuck()};
     }
     virtual pQuackable createRedheadDuck() override {
          return pQuackable {new RedheadDuck()};
     }
     virtual pQuackable createDuckCall() override {
          return pQuackable {new DuckCall()};
     }
     virtual pQuackable createRubberDuck() override {
          return pQuackable {new RubberDuck()};
     }
};

pAbstractDuckFactory normalFactory()
{
     return pAbstractDuckFactory {new DuckFactory()};
}

