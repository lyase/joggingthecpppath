#include "Observer.hpp"

namespace weathery {

struct Subject {
    virtual void registerObserver(Observer*) = 0;
    virtual void removeObserver(Observer*) = 0;
    virtual void notifyObservers(Observer*) = 0;
    virtual ~Subject();
};

}
