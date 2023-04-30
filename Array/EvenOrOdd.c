// Write a program to print Even or Odd in array.

#include <stdio.h>
void main()
{
    int num, arr[20], i;
    printf("Enter the size of array");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("Enter element");
        scanf("%d", &arr[i]);
    }
    printf("Even number in array are\n");
    for (i = 0; i < num; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d\n", arr[i]);
        }
    }
    printf("Odd number in array are\n");
    for ( i = 0; i < num; i++)
    {
    if (arr[i]%2==1) 
    {
        printf("%d\n", arr[i]);
}
}
}
