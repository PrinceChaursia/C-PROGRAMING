// Write a program to print Palindrome of any number.

#include <stdio.h>
void main()
{
    int num, reverse = 0, remainder, temp;
    printf("Enter any number\n");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    printf("Reverse number= %d\n", reverse);
    if (temp == reverse)
    {
        printf("It is Palindrone number");
    }
    else
    {
        printf("It is not a palindrome number");
    }
}