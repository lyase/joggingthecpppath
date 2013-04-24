#pragma once

namespace weathery {

// The '...' is used wherever the variadic template parameters or types need to be expanded
template <typename... Params>
class ObserverPattern {
public:
    typedef std::function<void(Params...)> Observer;
    typedef std::vector<Observer> ObserverList;
private:
    ObserverList observers;
public:
    template <typename T>
    void addObserver(T& observer) {
        observers.push_back([&](Params... params) { observer(params...); });
    }
    void notifyAllObservers(Params... params) {
        for(auto o : observers)
            o(params...);
    }
};

} // namespace weathery
