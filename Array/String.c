// Write a program to print String.
#include <stdio.h>
void main ()
{
    char str[6]={'P','R','I','N','C','E','C','H','A','U','R','A','S','I','A','\0'};
    int i=0;
    while (str[i]!='\0')   
    {
       printf("%c",str[i]);
       i++;
    }
    
}