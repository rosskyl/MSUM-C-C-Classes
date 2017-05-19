#include <iostream>
using namespace std;

const int sentinel = 0;
const int arraysize = 10;

void read(int numbers[],int& count);
void output(const int numbers[], int count);
int sum(const int numbers[], int count);
double average(const int numbers[], int count);
void sort(int numbers[], int n);
void largest(const int numbers[], int count,
             int& biggest, int& index);

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

void largest(const int numbers[], int count,
             int& biggest, int& index)
{
   biggest = numbers[0];
   index = 0;
   for (int i=1; i<count; i++)
      if (numbers[i] > biggest)
      {
         biggest = numbers[i];
         index = i;
      }
}
   

void output(const int numbers[], int count)
{
   for (int i=0; i<count; i++)
      cout << numbers[i] << ' ';
   cout << endl;
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

double average(const int numbers[], int count)
{
   return static_cast<double>(sum(numbers,count)) / count;
}

int sum(const int numbers[], int count)
{
   int theSum=0;
   for (int i=0; i<count; i++)
      theSum+=numbers[i];
   return theSum;
}

void sort(int numbers[], int n)
{
   int temp;
   int small;
   for (int i=0; i<n-1; i++)  // put n-1 ints in their correct spot
   {
      small=i;
      for (int j=i+1; j<n; j++)  // loop to find the smallest
         if (numbers[j] < numbers[small])
            small=j;
      temp = numbers[i];
      numbers[i] = numbers[small];
      numbers[small] = temp;
   }
}

