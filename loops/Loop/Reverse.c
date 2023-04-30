// Write a program to print Reverse of any number.

# include <stdio.h>
void main()
{
    int num,reverse,remainder;
    printf("Enter any numbers\n");
    scanf("%d",&num);
    while (num!=0)
    {
    remainder=num%10;
    reverse=reverse*10+remainder;
    num=num/10;
    }
    printf("Reverse number = %d",reverse);
    
}