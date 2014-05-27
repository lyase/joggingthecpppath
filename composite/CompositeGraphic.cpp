#include"CompositeGraphic.hpp"
#include <vector>
#include <iostream> // std::cout
#include <memory> // std::auto_ptr
#include <algorithm> // std::for_each
#include <functional> // std::mem_fun
 void CompositeGraphic::print() const {
          // for each element in graphicList_, call the print member function
          std::for_each(graphicList_.begin(), graphicList_.end(), std::mem_fun(&Graphic::print));
     }

     void CompositeGraphic::add(Graphic *aGraphic) {
          graphicList_.push_back(aGraphic);
     }
