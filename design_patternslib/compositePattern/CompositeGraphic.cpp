#include"CompositeGraphic.hpp"
#include <vector>
#include <iostream> // std::cout
#include <memory> // std::auto_ptr
#include <algorithm> // std::for_each
#include <functional> // std::mem_fun
void CompositeGraphic::print() const
{
     // for each element in graphicList_, call the print member function
     std::cout<<"\nloopingthru: "<<graphicList_.size()<<"elements"<<" the old  way\n";
     std::for_each(graphicList_.begin(), graphicList_.end(), std::mem_fun(&Graphic::print));
     std::cout<<"\nloopingthru: "<<graphicList_.size()<<"elements"<<" the c++11 way\n";
     for(auto it = graphicList_.begin(); it != graphicList_.end() ; ++it) {
          (*it)->print();
     }
}
void CompositeGraphic::add(Graphic *aGraphic)
{
     graphicList_.push_back(aGraphic);
}
