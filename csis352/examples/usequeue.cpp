#include <iostream>
using namespace std;
#include "linkedQueue.h"
int main()
{
   linkedQueueType<int> s;
   int num;
   cout << "enter ints, 0 to quit: ";
   cin >> num;
   while (num != 0 && !s.isFullQueue())
   {
      s.addQueue(num);
      cin >> num;
   }
   cout << "queue contents: ";
   while (!s.isEmptyQueue())
   {
      cout << s.front() << ' ';
      s.deleteQueue();
   }
   cout << endl;
   return 0;
}
   
   
