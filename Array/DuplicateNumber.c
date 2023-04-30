// // Weite a program to remove duplicate number in array.

#include <stdio.h>
void main()
{
    int a[20];
    int num, i, dup;
    dup = a[i];
    printf("Enter the Size of array\n");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("Enter the element\n");
        scanf("%d",&a[i]);
        {
            if (dup == a[i] + 1)
            {
                printf("%d\n", a[i]);
            }
        }
    }
}
