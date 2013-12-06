#pragma once

#include "MenuItem.hpp"

#include <list>

struct PancakeHouseMenu {
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
