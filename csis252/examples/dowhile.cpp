#include <iostream>
using namespace std;

int main()
{
   int num;
   cout << "input a value in the range 1 to 10\n";
   do
      cin >> num;
   while (num <= 0 || num > 10);
   cout << num << endl;
   return 0;
}
