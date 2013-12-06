#include <MenuItem.hpp>

struct Waitress {
    std::list<MenuItem> breakfastItems;
    std::vector<MenuItem> lunchItems; 

    void printMenu() {
        PancakeHouseMenu pcakeMenu;
        breakfastItems = pcakeMenu.menuItems;

        DinerMenu dinerMenu;
        lunchItems = dinerMenu.menuItems;
    }
    void printBreakfastMenu() {
        for (size_t i=0; i<breakfastItems.size(); ++i) {
            MenuItem menuItem = breakfastItems.at(i);
            std::cout << menuItem.name << " "
                      << menuItem.price << " "
                      << menuItem.description;
        }
    }
    void printLunchMenu() {
        for (size_t i=0; i<lunchItems.size(); ++i) {
            MenuItem menuItem = lunchItems.at(i);
            std::cout << menuItem.name << " "
                      << menuItem.price << " "
                      << menuItem.description;
        }
    }
    void printVegitarianMenu() {
        for (size_t i=0; i<breakfastItems.size(); ++i) {
            MenuItem menuItem = breakfastItems.at(i);
            if (menuItem.vegetarian)
                std::cout << menuItem.name << " "
                          << menuItem.price << " "
                          << menuItem.description;
        }
        for (size_t i=0; i<lunchItems.size(); ++i) {
            MenuItem menuItem = lunchItems.at(i);
            if (menuItem.vegetarian)
                std::cout << menuItem.name << " "
                          << menuItem.price << " "
                          << menuItem.description;
        }
    }
    bool isItemVegitarian(const MenuItem& item) {
        return item.vegetarian;
    }
};
