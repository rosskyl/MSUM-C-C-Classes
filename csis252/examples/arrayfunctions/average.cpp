int sum(const int numbers[], int count)
{
   int theSum=0;
   for (int i=0; i<count; i++)
      theSum+=numbers[i];
   return theSum;
}

double average(const int numbers[], int count)
{
   return static_cast<double>(sum(numbers,count)) / count;
}

