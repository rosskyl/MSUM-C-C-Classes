#ifndef _SQUARETYPE_H
#define _SQUARETYPE_H
#include <iostream>
using namespace std;
#include "rectangleType.h"
class squareType : public rectangleType
{
   public:
      void setDimension(double);
      double getSide() const;
      void print() const;
      squareType(double);
      squareType();
};



#endif
