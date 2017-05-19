#include <iostream>
#include <iomanip>
using namespace std;

const int sentinel = 0;

// this program will input ints from the keyboard until the
// sentinel value is input then it will output the average

int main()
{
   cout << fixed << showpoint << setprecision(2);
   int num;
   int count=0;
   int sum=0;
   double average;
   cout << "enter ints, sentinel value " << sentinel
        << " ends the input\n";
//      cerr << "num=" << num << endl;
//    num = 1;  // patch
   cin >> num;
   while (num!=sentinel)
   {
//       cin >> num;
      count++;
      sum += num;
      cin >> num;
//       cerr << "num=" << num << "   sum=" << sum
//            << "   count=" << count << endl;
   }
//    count--;  patch
//    sum -= sentinel;  patch
   average = static_cast<double>(sum)/count;
   cout << "the average is " << average << endl;
   return 0;
}
