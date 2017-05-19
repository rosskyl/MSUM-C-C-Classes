#include <iostream>
using namespace std;
#include "linkedQueue.h"

int main()
{
   queueType<int> q;
   int num;
   cout << "enter ints, 0 to quit" << endl;
   cin >> num;
   while (num!=0 && !q.isFullQueue())
   {
      q.addQueue(num);
      cin >> num;
   }
   while (!q.isEmptyQueue())
   {
      cout << q.front() << ' ';
      q.deleteQueue();
   }
   cout << endl;
   return 0;
}
