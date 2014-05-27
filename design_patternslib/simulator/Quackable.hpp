#pragma once

#include "IQuackObservable.hpp"

#include <memory>

class Quackable : public IQuackObservable {
public:
     virtual void quack() = 0;
     virtual ~Quackable() {}
};

//using pQuackable = std::unique_ptr<Quackable>;
using pQuackable = std::shared_ptr<Quackable>;
