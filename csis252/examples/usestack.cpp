#include <iostream>
using namespace std;
#include "linkedStack.h"

int main()
{
   stackType<int> stack;
   int num;
   cout << "enter ints, 0 to quit" << endl;
   cin >> num;
   while (num!=0 && !stack.isFullStack())
   {
      stack.push(num);
      cin >> num;
   }
   while (!stack.isEmptyStack())
   {
      cout << stack.top() << ' ';
      stack.pop();
   }
   cout << endl;
   return 0;
}
