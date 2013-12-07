#pragma once

#include "MenuItem.hpp"
#include "PancakeHouseMenu.hpp"
#include "DinerMenu.hpp"

#include <iostream>
#include <functional>

/// Easy printing of a menu item
std::ostream& operator <<(std::ostream& s, const MenuItem& item) {
    s << item.name << " "
      << item.price << " "
      << item.description;
    return s;
}

/// Easy printing of a DinerMenu of menu items
std::ostream& operator <<(std::ostream& s, const DinerMenu& menu) {
    for(const MenuItem& item : menu.menuItems)
        s << item << std::endl;
    return s;
}

/// Easy printing of a PancakeHouseMenu of menu items
std::ostream& operator <<(std::ostream& s, const PancakeHouseMenu& menu) {
    for(const MenuItem& item : menu.menuItems)
        s << item << std::endl;
    return s;
}

struct Waitress {
    PancakeHouseMenu breakfastItems;
    DinerMenu lunchItems;

    template <typename Container>
    void printMenu(Container& menu, std::function<bool(const MenuItem&)> predicate = {}) const {
        if (predicate) {
            for (const auto& item : menu.menuItems)
                if (predicate(item))
                    std::cout << item << std::endl;
        } else {
            std::cout << menu;
        }
    }
    void printBoth() const {
        printBreakfastMenu();
        printLunchMenu();
    }
    void printBreakfastMenu() const {
        printMenu(breakfastItems);
    }
    void printLunchMenu() const {
        printMenu(lunchItems);
    }
    void printVegitarianMenu() const {
        auto isVege = [](const MenuItem& item) { return item.vegitarian; };
        printMenu(breakfastItems, isVege);
        printMenu(lunchItems, isVege);
    }
};
