#include <iostream>
using namespace std;

const int ARRAYMAX = 5;

struct example
{
   int i;
   float f;
   char c;
};

int main()
{
   example s;
   s.i = 23;
   s.f = 8.234;
   s.c = 'A';
   cout << s.i << ' ' << s.f << ' ' << s.c << endl;
   example array[ARRAYMAX];
   for (int i = 0; i<ARRAYMAX; i++)
   {
      array[i].i = 0;
      array[i].f = 0;
      array[i].c = 'X';
   }
   for (int i = 0; i<ARRAYMAX; i++)
   {
      cout << array[i].i << ' '
           << array[i].f << ' '
           << array[i].c << endl;
   }
   

   return 0;
}
