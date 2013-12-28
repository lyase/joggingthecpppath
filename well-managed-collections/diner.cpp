#include "Waitress.hpp"

#include <iostream>
#include <sstream>

int main(int, char**) {
    Waitress alice;
    using namespace std;

    cout << endl << "== Both Menus ==" << endl;
    alice.printBoth();

    cout << endl << "== Vege only Menus ==" << endl;
    alice.printVegitarianMenu();

    std::stringstream newItem("fish 9.20 Snapper");
    MenuItem fish("", "", false, 0);
    newItem >> fish;
    
    cout << endl << "I read a new menu item: " << endl
         << fish << endl;

}


