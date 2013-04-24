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
    void update(double temperature, double humidity, double pressure);
    void display() const;
};

} // namespace weathery
