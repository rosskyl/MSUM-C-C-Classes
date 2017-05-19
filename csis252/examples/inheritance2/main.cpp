#include <iostream>
#include <iomanip>
#include "squareType.h"

using namespace std;

int main()
{
   squareType s;
   s.setDimension(5);
   cout << "area: " << s.area() << endl;
   cout << "perimeter " << s.perimeter() << endl;
   
   squareType s2(7);
   cout << "area: " << s2.area() << endl;
   cout << "perimeter " << s2.perimeter() << endl;
   cout << "side length " << s2.getSide() << endl;
   s2.print();
   s2.rectangleType::print();
   cout << endl;
   
   return 0;                                      //line 24
}
