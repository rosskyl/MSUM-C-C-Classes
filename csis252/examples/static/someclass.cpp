#include "someclass.h"

int someClass::Y;

int someClass::getX() const
{
   return X;
}

int someClass::getY()
{
   return Y;
}

void someClass::setX(int newX)
{
   X = newX;
}

void someClass::setY(int newY)
{
   Y = newY;
}

