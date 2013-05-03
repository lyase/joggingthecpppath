#pragma once

namespace factory {

class Pizza {
public:
    virtual ~Pizza();
    Pizza();
    virtual const char* description() const = 0;
    virtual double cost() const = 0;
};
}
