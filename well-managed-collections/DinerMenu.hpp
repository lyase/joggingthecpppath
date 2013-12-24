#pragma once

#include "MenuItem.hpp"

#include <vector>
#include <iostream>
class DinerMenu {
public:
    std::vector<MenuItem> menuItems = {
        {"Vegitarian BLT",
         "(Fakin') Bacon with lettuce",
         true,
         2.99},
        {"BLT",
         "Bacon, Lettuce and Tomato Sandwidch",
         false,
         3.99},
        {"Soup of the day",
         "A bowl of the soup of the finest blah blah",
         false,
         4.99}
    };
};
/// helpers  Easy printing of a DinerMenu of menu items
std::ostream& operator <<(std::ostream& s, const DinerMenu& menu) {
    for(const MenuItem& item : menu.menuItems)
        s << item << std::endl;
    return s;
}

