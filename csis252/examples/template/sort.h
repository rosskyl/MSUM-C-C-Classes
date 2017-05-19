// function sort will sort an array descendingly
template <typename itemType>
void sort(itemType array[], int n)
{
   itemType temp;
   for (int i=0; i<n-1; i++)  
   {
      int big=i;
      for (int j=i+1; j<n; j++) 
         if (array[j] > array[big])
            big=j;
      temp = array[i];
      array[i] = array[big];
      array[big] = temp;
   }
}

