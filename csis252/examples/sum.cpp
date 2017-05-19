#include <iostream>
using namespace std;

// good
int sum_v1(int numbers[], int count)
{
   int theSum=0;
   for (int i=0; i<count; i++)
      theSum+=numbers[i];
   return theSum;
}

// not so good
void sum_v2(int numbers[], int count, int& theSum)
{
   theSum=0;
   for (int i=0; i<count; i++)
      theSum+=numbers[i];
}

int main()
{
   int numbers[] = {1,2,3,4,5,6,7,8,9,10};
   int count=10;
   cout << "the sum is " << sum_v1(numbers,count) << endl;
   int sum;
   sum_v2(numbers,count,sum);
   cout << "the sum is " << sum << endl;
   return 0;
}
