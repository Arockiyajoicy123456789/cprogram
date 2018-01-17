#include <stdio.h>
int main()
{
  int array[100], max, n, i, location = 1;
 
  printf("Enter the number of elements in array\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
 
  max = array[0];
 
  for (i = 1; i < n; i++)
  {
    if (array[i] > max)
    {
       max  = array[i];
       location = i+1;
    }
  }
 
  printf("Maximum element is present at location %d and it's value is %d.\n", location, max);
  return 0;
}
