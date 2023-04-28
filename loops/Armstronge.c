// Write a program to print Armstrong number of any Number.

#include <stdio.h>
void main()
{
    int num, remainder, sum, temp;
    printf("Enter the number\n");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
        num = num / 10;
    }
    printf("sum == %d\n", sum);
    if (sum == temp)
    {
        printf("it is Armstrong number");
    }
    else
    {
        printf("it is not an Armstrong number");
    }
}