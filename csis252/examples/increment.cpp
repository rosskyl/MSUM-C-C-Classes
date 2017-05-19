#include <iostream>
using namespace std;
int main()
{
   int x = 5;
   int y;
   y = x++;
   cout << "x=" << x << "   y=" << y << endl;
   y = ++x;
   cout << "x=" << x << "   y=" << y << endl;
   return 0;
}