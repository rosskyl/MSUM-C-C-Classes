#include <iostream>
#include "constants.h"
#include "prototypes.h"
using namespace std;


int main()
{
   int numbers[arraysize];
//    int count=0;  // better to put into the function
   int count;
   int biggest;
   int bigIndex;
   read(numbers,count);
   cout << "there are " << count << " numbers in the array\n";
   cout << "numbers in the array: ";
   output(numbers,count);
   
   largest(numbers,count,biggest,bigIndex);
   cout << "the biggest is " << biggest
        << " first found at index " << bigIndex << endl;

   cout << "the sum is " << sum(numbers,count) << endl;
   cout << "the average is " << average(numbers,count) << endl;
   sort(numbers,count);
   cout << "numbers in the array: ";
   output(numbers,count);
   return 0;
}
