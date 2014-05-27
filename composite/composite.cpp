#include <vector>
#include <iostream> // std::cout
#include <memory> // std::auto_ptr
#include <algorithm> // std::for_each
#include <functional> // std::mem_fun
#include "Ellipse.hpp" // std::mem_fun
#include "CompositeGraphic.hpp" // std::mem_fun
//build with
//g++  composite/composite.cpp -o prg
int main()
{
     // Initialize four ellipses
     const std::auto_ptr<Ellipse> ellipse1(new Ellipse());
     const std::auto_ptr<Ellipse> ellipse2(new Ellipse());
     const std::auto_ptr<Ellipse> ellipse3(new Ellipse());
     const std::auto_ptr<Ellipse> ellipse4(new Ellipse());

     // Initialize three composite graphics
     const std::auto_ptr<CompositeGraphic> graphic(new CompositeGraphic());
     const std::auto_ptr<CompositeGraphic> graphic1(new CompositeGraphic());
     const std::auto_ptr<CompositeGraphic> graphic2(new CompositeGraphic());

     // Composes the graphics
     graphic1->add(ellipse1.get());
     graphic1->add(ellipse2.get());
     graphic1->add(ellipse3.get());

     graphic2->add(ellipse4.get());

     graphic->add(graphic1.get());
     graphic->add(graphic2.get());

     // Prints the complete graphic (four times the string "Ellipse")
     graphic->print();
     return 0;
}


