/* This example replaces array.cpp as a better example for reading
   and storing values into an array.  It reads into a temporary
   location to prevent read past the end of the array.
*/

#include <iostream>
using namespace std;

const int sentinel = -999;
const int arraysize = 5;

int main()
{
   int numbers[arraysize];
   int num;
   int count=0;
   cout << "enter ints, " << sentinel << " to quit\n";
   cin >> num;
   while (num != sentinel  && count < arraysize)
   {
      numbers[count] = num;
      count++;
      cin >> num;
   }
   cout << "there are " << count << " numbers in the array\n";
   cout << "numbers in the array\n";
   for (int i=0; i<count; i++)
      cout << numbers[i] << endl;
   return 0;
}
