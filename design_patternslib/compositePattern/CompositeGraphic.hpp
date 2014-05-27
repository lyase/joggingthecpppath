#pragma once
#include <vector>
#include "IGraphic.hpp"
class CompositeGraphic : public Graphic {
public:
     void print() const;

     void add(Graphic *aGraphic);
private:
     std::vector<Graphic*>  graphicList_;
};
