#pragma once

#include "MenuItem.hpp"

#include <vector>

struct DinerMenu {
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
