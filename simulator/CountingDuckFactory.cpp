#include "DuckFactories.hpp"

#include "MallardDuck.hpp"
#include "RedheadDuck.hpp"
#include "DuckCall.hpp"
#include "RubberDuck.hpp"
#include "QuackCounter.hpp"

class CountingDuckFactory : public AbstractDuckFactory {
public:
     pQuackable createMallard() {
          return pQuackable {new QuackCounter(new MallardDuck())};
     }
     pQuackable createRedheadDuck() {
          return pQuackable {new QuackCounter(new RedheadDuck())};
     }
     pQuackable createDuckCall() {
          return pQuackable {new QuackCounter(new DuckCall())};
     }
     pQuackable createRubberDuck() {
          return pQuackable {new QuackCounter(new RubberDuck())};
     }
};

pAbstractDuckFactory countingFactory()
{
     return pAbstractDuckFactory {new CountingDuckFactory()};
}
