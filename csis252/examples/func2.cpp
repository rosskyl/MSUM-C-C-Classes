// to show the difference between pass by value and
// pass by reference parameters

#include <iostream>
using namespace std;

void func(int, int&, int, int&);
void swap(int&,int&);

int main()
{
   int w=10, x=20, y=30, z=40;
   func(w,x,y,z);
   cout << w << endl;
   cout << x << endl;
   cout << y << endl;
   cout << z << endl;
   int large = 50;
   int small = 60;
   if (large < small)
      swap(large,small);
   cout << "small is " << small << endl;
   cout << "large is " << large << endl;
   return 0;
}

// a and c are pass by value, b and d are pass by reference
void func(int a, int& b, int c, int& d)
{
   a = 100;
   b = 200;
   c = 300;
   d = 400;
}

void swap(int& x,int& y)
{
   int temp = x;
   x = y;
   y = temp;
}
