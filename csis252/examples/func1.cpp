#include <iostream>
using namespace std;

// function prototypes
void greeting();
int sum(int, int); // parameter names in a prototype are ignored

int main()
{
   // a function that does not return a value is
   // put on a line by itself
   greeting();
   // if a function returns a value, you have to
   // do something with it
   cout << sum(5,3) << endl;
//    sum(5,3);  // bad
   int num = sum(5,8) + sum(6,3);
   int num2 = 19;
   cout << num << endl;
   cout << sum(num,num2) << endl;
   return 0;
}

void greeting()
{
   cout << "hello\n";
}

int sum(int x, int y) // both are pass by value
{
//    int thesum = x+y;
//    return thesum;
   return x+y;
//    cout << "the sum is " << x+y << endl; // bad
// functions should return results, not output them
}
