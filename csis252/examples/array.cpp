/* This example reads directly into the array.  Because of that,
   I had to put a patch in the code to prevent from reading past
   the end of the array.  See arraybetter.cpp for a better way.
*/

#include <iostream>
using namespace std;

const int sentinel = -999;
const int arraysize = 5;

int main()
{
   int numbers[arraysize];
   int count=0;
   cout << "enter ints, " << sentinel << " to quit\n";
   cin >> numbers[count];
   while (numbers[count] != sentinel  && count < arraysize)
   {
      cerr << "just stored " << numbers[count]
           << "   and the count is " << count << endl;
      count++;
      if (count < arraysize) // patch
         cin >> numbers[count];
   }
   cout << "there are " << count << " numbers in the array\n";
   cout << "numbers in the array\n";
   for (int i=0; i<count; i++)
      cout << numbers[i] << endl;
   return 0;
}
