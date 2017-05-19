#include <iostream>
using namespace std;

void print(const char array[], int first, int last)
{
   if (first <= last)
   {
      print(array,first+1,last);
      cout << array[first] << endl;
   }
}

int main()
{
   char array[] = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   print (array,1,5);
   return 0;
}
