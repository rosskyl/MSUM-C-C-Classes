// some comment
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
   
