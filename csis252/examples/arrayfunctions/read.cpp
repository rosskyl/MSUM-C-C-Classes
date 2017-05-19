#include <iostream>
using namespace std;
#include "constants.h"

void read(int numbers[],int& count)
{
   count = 0;
   int num;
   cout << "enter numbers, " << sentinel << " ends input\n";
   cin >> num;
   while (num != sentinel  && count < arraysize)
   {
      numbers[count] = num;
      count++;
      cin >> num;
   }
}
