// Write a program to print largest & Smallest number in array.
#include <stdio.h>
void main()
{
    int a[] = {12, 15, 3, 7, 9, 11, 4, 8, 10, 13};
    int max, min;
    max = a[0];

    for (int i = 0; i < 10; i++)
    {
        if (max <= a[i])
        {
            max = a[i];
        }
    }
    printf("%d\n", max);
    
min = a[0];
for (int i = 0; i < 10; i++)
{
    if (min>=a[i])
    {
        min=a[i];
    }
}
printf("%d\n", min);
}