//Binary Search Using user Inputs
//Raheel H Parekh 133
#include <stdio.h>
 
void main()
{
    int array[10];
    int i, j, num, temp, value;
    int first_index, mid, last_index; 
    printf("Enter No of Elements :");
    scanf("%d", &num);
    printf("Enter the elements \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array elements\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
    // Bubble sorting 
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < (num - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("Array After Sorting\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
    printf("Enter the element to be searched :");
    scanf("%d", &value);
    // Binary searching
    first_index = 1;
    last_index = num;
    do
    {
        mid = (first_index + last_index) / 2;
        if (value < array[mid])
            last_index = mid - 1;
        else if (value > array[mid])
            first_index = mid + 1;
    } while (value != array[mid] && first_index <= last_index);
    if (value == array[mid])
    {
        printf("Element Present In The Array\n");
    }
    else
    {
        printf("Element NOT Present In The Array\n");
    }
}