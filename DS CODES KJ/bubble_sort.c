//Bubble Sort With User Input
//Raheel H Parekh 133
#include <stdio.h>

int main()
{
  int array[100], n, c, d, temp;
  printf("BUBBLE SORT\n");
  printf("Enter number of elements: ");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) 
      {
        temp       = array[d];
        array[d]   = array[d+1];
        array[d+1] = temp;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);

  return 0;
}