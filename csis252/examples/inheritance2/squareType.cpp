#include "squareType.h"

void squareType::setDimension(double side)
{
   rectangleType::setDimension(side,side);
}

double squareType::getSide() const
{
   return rectangleType::getLength();
}

void squareType::print() const
{
   cout << "Side = " << getSide() << endl;
}

squareType::squareType(double side) : rectangleType(side,side)
{
//    setDimension(side);
}

squareType::squareType() : rectangleType(0,0)
{
//    setDimension(0);
}
