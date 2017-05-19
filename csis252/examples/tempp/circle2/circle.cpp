// File:     circle.cpp
// Author:   Dan Brekke
// Date: 

// Description
// This file contains the implementation for a circle class

#include "circle.h"

ostream& operator<<(ostream& out, const Circle& c)
{
   out << "radius = " << c.radius() << endl;
   out << "area = " << c.area() << endl;
   return out;
}

istream& operator>>(istream& in, Circle& c)
{
//    cout << "enter the radius: ";
   double r;
   in >> r;
   c.setRadius(r);
   return in;
}

bool Circle::operator==(const Circle& otherCircle) const
{
   cout << "in the operator==\n";
   return radius() == otherCircle.radius();
}

bool Circle::operator<(const Circle& otherCircle) const
{
   cout << "in the operator<\n";
   return radius() < otherCircle.radius();
}

bool Circle::operator!=(const Circle& otherCircle) const
{
   cout << "in the operator!=\n";
//    return radius() != otherCircle.radius();
   return !(*this == otherCircle);
}

bool Circle::operator<=(const Circle& otherCircle) const
{
   cout << "in the operator<=\n";
   return *this==otherCircle || *this<otherCircle;
}

bool Circle::operator>(const Circle& otherCircle) const
{
   cout << "in the operator>\n";
   return !(*this<=otherCircle);
}

bool Circle::operator>=(const Circle& otherCircle) const
{
   cout << "in the operator>=\n";
   return !(*this<otherCircle);
}

Circle::Circle(double r)
{
   setRadius(r);
}

void Circle::setRadius(double r)
{
   rad = r;
}

double Circle::radius() const
{
   return rad;
}

double Circle::diameter() const
{
   return radius()*2;
}

double Circle::area() const
{
   return PI*radius()*radius();
}

double Circle::circumference() const
{
   return 2*PI*radius();
}
