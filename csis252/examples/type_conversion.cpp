#include <iostream>
using namespace std;

int main()
{
   int i;
   float f;
   char c;
   bool b;
   i = 23;
   f = 54.74;
   c = 'a';
   b = true;
   f = static_cast<float>(i); // better than f = i;
   cout << "i is " << i << endl;
   cout << "f is " << f << endl;
   cout << "c is " << c << endl;
   cout << "b is " << b << endl;
   return 0;
}

