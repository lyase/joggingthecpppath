#include "Waitress.hpp"

#include <iostream>

int main(int, char**) {
    Waitress alice;
    using namespace std;

    cout << endl << "== Both Menus ==" << endl;
    alice.printBoth();

    cout << endl << "== Vege only Menus ==" << endl;
    alice.printVegitarianMenu();
    

}


