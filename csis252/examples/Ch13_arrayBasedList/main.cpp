#include <iostream>
using namespace std;
#include "arrayListType.h"

int main()
{
   arrayListType list(10);
   int num;
   cout << "enter ints (0 quits) ";
   cin >> num;
   while (num != 0 && !list.isFull())
   {
      list.insertEnd(num);
      cin >> num;
   }
   list.print();
   for (int i=0; i<list.listSize(); i++)
   {
      list.retrieveAt(i,num);
      cout << num*2 << endl;
   }
   return 0;
}

