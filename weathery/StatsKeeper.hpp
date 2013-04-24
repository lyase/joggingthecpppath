#pragma once

#include <vector>

namespace weathery {

class StatsKeeper {
private:
    struct Entry {
        double temperature,
               humidity,
               pressure;
    };
    std::vector<Entry> history;
public:
    void operator()(double temperature, double humidity, double pressure);
    void display() const;
};

} // namespace weathery
