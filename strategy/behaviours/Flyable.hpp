#pragma once
#include <memory>

namespace Duck {
namespace Behaviour {

class Flyable {
public:
    void virtual fly();
};

//using pIBeatModel = IBeatModel*;
//using pFlyable = std::shared_ptr<Flyable>;
//using pFlyable = Flyable*;
//using pFlyable = std::unique_ptr<Flyable>;
}
}

