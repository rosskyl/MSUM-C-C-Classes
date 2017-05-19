#include <iostream>
using namespace std;

const int sentinel = -999;
const int arraysize = 5;

int main()
{
   int numbers[arraysize];
   int count=0;
   int num; // temporary variable for reading
   bool found;
   int pos;
   cout << "enter ints, " << sentinel << " to quit\n";
   cin >> num;
   while (num != sentinel  && count < arraysize)
   {
      numbers[count] = num;
      count++;
      cin >> num;
   }
   
   cout << "enter a value to search the array: ";
   cin >> num;
   pos = 0;
   found = false;
   while (!found && pos<count)
      if (numbers[pos] == num)
         found = true;
      else
         pos++;
   if (found)
      cout << num << " found at position " << pos << endl;
   else
      cout << num << " not found\n";
   return 0;
}
