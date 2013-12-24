#pragma once

#include "MenuItem.hpp"

#include <list>
#include <iostream>
class PancakeHouseMenu {
    public:
    std::list<MenuItem> menuItems = {
        {"K&B's Pancake Breakfast",
         "Pancakes with scrabled eggs, and toast",
         true,
         2.99},
        {"Regular Pancake Breakfast",
         "Pancakes with fried eggs, sausage",
         false,
         2.99}
    };

    void addItem(const MenuItem& item) {
        menuItems.push_back(item);
    }
};
/// helpers Easy printing of a PancakeHouseMenu of menu items
std::ostream& operator <<(std::ostream& s, const PancakeHouseMenu& menu) {
    for(const MenuItem& item : menu.menuItems)
        s << item << std::endl;
    return s;
}
