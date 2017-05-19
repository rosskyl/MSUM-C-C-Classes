// File:     main.cpp
// Author:   Dan Brekke
// Date: 

// Description
// This program will test the circle clamain.cpp:45:14: error: no match for ‘operator==’ in ss

#include <iostream>
#include <iomanip>
#include "circle.h"
using namespace std;

// bool operator==(const Circle& lhs, const Circle& rhs)
// {
// //    if (lhs.radius() == rhs.radius())
// //       return true;
// //    else
// //       return false;
//    return lhs.radius() == rhs.radius();
// }

int main()
{
   Circle circles[10];
   cout << showpoint << fixed << setprecision(2);
   float r;
   Circle c1;
   cout << "enter radius for a circle: ";
   cin >> r;
   c1.setRadius(r);
   cout << left << setw(14) << "radius" 
        << right << setw(10) << c1.radius() << endl;
   cout << left << setw(14) << "diameter" 
        << right << setw(10) << c1.diameter() << endl;
   cout << left << setw(14) << "area" 
        << right << setw(10) << c1.area() << endl;
   cout << left << setw(14) << "circumference" 
        << right << setw(10) << c1.circumference() << endl;
   cout << endl;

   cout << "enter radius for another circle: ";
   Circle c2;
   cin >> c2;
   cout << left << setw(14) << "radius" 
        << right << setw(10) << c2.radius() << endl;
   cout << left << setw(14) << "diameter" 
        << right << setw(10) << c2.diameter() << endl;
   cout << left << setw(14) << "area" 
        << right << setw(10) << c2.area() << endl;
   cout << left << setw(14) << "circumference" 
        << right << setw(10) << c2.circumference() << endl;
   cout << endl;

   if (c1 <= c2)
      cout << "Yes\n";
   else
      cout << "No\n";
//    if (c1 != c2)
//       cout << "the Circles are not equal\n";
//    else
//       cout << "the Circles are equal\n";
   
   cout << endl << c1 << endl << c2 << endl;
   return 0;
}
