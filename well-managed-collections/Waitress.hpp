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

/// Easy printing of a container of menu items
template <typename Container>
std::ostream& operator <<(std::ostream& s, const Container& menu) {
    for(const MenuItem& item : menu)
        s << item << std::endl;
    return s;
}

struct Waitress {
    PancakeHouseMenu breakfastItems;
    DinerMenu lunchItems;

    template <typename Menu>
    void printMenu(Menu& menu, std::function<bool(const MenuItem&)> predicate = {}) {
        if (predicate) {
            for (auto& item : menu)
                if (pred(item))
                    std::cout << item;
        } else {
            std::cout << menu;
        }
    }
    void printBoth() {
        printBreakfastMenu();
        printLunchMenu();
    }
    void printBreakfastMenu() {
        printMenu(breakfastItems);
    }
    void printLunchMenu() {
        printMenu(lunchItems);
    }
    void printVegitarianMenu() {
        auto isVege = [](const MenuItem& item) { return item.vegitarian; };
        printMenu(breakfastItems, isVege);
        printMenu(lunchItems, isVege);
    }
};
