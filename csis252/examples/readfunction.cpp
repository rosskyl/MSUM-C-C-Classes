#include <iostream>
using namespace std;

const int sentinel = 0;
const int arraysize = 5;

void read(int numbers[],int& count);

int main()
{
   int numbers[arraysize];
//    int count=0;  // better to put into the function
   int count;
   read(numbers,count);
   cout << "there are " << count << " numbers in the array\n";
   cout << "numbers in the array\n";
   for (int i=0; i<count; i++)
      cout << numbers[i] << endl;
   return 0;
}

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
