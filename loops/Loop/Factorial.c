// Write a program to print factorial of any number.

# include <stdio.h>
void main()
{
    int num,fact=1,i=1;
    printf("Enter the number\n");
    scanf("%d",&num);
    while (i<=num)
    {
        fact=fact*i;
        printf("%d\n",fact);
        i++;
    }
    printf("Factorial=%d",fact);
}

