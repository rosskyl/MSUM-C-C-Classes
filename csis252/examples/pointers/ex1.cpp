#include <iostream>

using namespace std;

int main()
{
   int x=6;
   int y=27;
   int *p;
   cout << "the address of x is:      " << &x << endl;
   cout << "the address of y is:      " << &y << endl;
   cout << "address of p is:          " << &p << endl;
   p=&x;
   cout << "p is pointing at address: " << p << endl;
   cout << *p << endl;
   *p=17;
   cout << x << endl;
   p = &y;
   cout << "p is pointing at address: " << p << endl;
   cout << *p << endl;
   return 0;
}
