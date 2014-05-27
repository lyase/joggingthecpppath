#pragma once

#include "MenuItem.hpp"
#include "PancakeHouseMenu.hpp"
#include "DinerMenu.hpp"

#include <iostream>
#include <functional>
class Waitress {
public:
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
          auto isVege = [](const MenuItem& item) {
               return item.vegitarian;
          };
          printMenu(breakfastItems, isVege);
          printMenu(lunchItems, isVege);
     }
};
