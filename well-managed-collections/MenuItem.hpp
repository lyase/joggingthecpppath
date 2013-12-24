#pragma once

#include <string>

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
