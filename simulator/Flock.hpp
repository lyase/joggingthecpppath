/**
 * =====================================================================================
 *
 *       Filename:  Flock.hpp
 *
 *    Description:  Implements a flock of ducks
 *
 *        Version:  1.0
 *        Created:  02/08/13 17:52:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Matthew Sherborne (), msherborne@gmail.com
 *
 * =====================================================================================
 */
#include "Quackable.hpp"

#include <vector>
#include <memory>

/// A flock of ducks.
/// this is a collection that Implements Quackable, so a quack call will be pushed out to many children
class Flock : public Quackable {
private:
     std::vector<pQuackable> quackables;
public:
     pQuackable add(pQuackable quackable) {
          quackables.push_back(quackable);
          return quackable;
     }
     virtual void quack() override {
for (auto quacker : quackables) {
               quacker->quack();
          }
     }
     void registerObserver(pObserver observer) {
for (auto quacker : quackables)
               quacker->registerObserver(observer);
     }
     void notifyObservers() {
for (auto quacker : quackables)
               quacker->notifyObservers();
     }
};
