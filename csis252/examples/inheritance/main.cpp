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
   return 0;                                      //line 24
}
