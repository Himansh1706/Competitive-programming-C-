
void selectionSort(int arr[], int n)
{
   int i, j;
   for (i = n-1; i >=0; i--)      
   {
        int j = select(arr, i);
        swap(&arr[i], &arr[j]);
   }
}
 

int select(int arr[], int i)
{
  for (int k=i;k>=0;k--)
{
if (arr[k]>arr[i])
i=k;
}
return i;
}
