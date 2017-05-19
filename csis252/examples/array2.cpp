#include <iostream>
using namespace std;

int main()
{
   int numbers1[] = {1,2,3,4,5};
   int numbers2[] = {1,2,3,4,5};
   for (int i=0; i<5; i++)
      cout << numbers1[i] << ' ';
   cout << endl;
   // cannot output the entire array.  You must output
   // one at a time.
   cout << numbers1 << endl;
   cout << numbers2 << endl;
   // cannot compare the entire array.
   if (numbers1 == numbers2)
      cout << "yes\n";
   else
      cout << "no\n";
   
   numbers1 = numbers2;
   // cannot input an entire array
//    cin >> numbers1;

   // cannot do arithmetic with an entire array

   return 0;
}
