#pragma once

#include <string>
#include <iostream>
class MenuItem {
public:
    MenuItem(    std::string _name,std::string _description, bool _vegitarian,    double _price){
name=_name;
description= _description;
  _vegitarian=_vegitarian;
        price= _price;}
    std::string name;
    std::string description;
    bool vegitarian;
    double price;
};
/// helpers  Easy printing of a menu item
std::ostream& operator <<(std::ostream& s, const MenuItem& item) {
    s << item.name << " "
      << item.price << " "
      << item.description;
    return s;
}
