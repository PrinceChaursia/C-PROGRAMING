// Write a program to print pattern.
// 1
// 12
// 123
// 1234
// 12345
//_______________________________________

#include <stdio.h>
void main()
{
    int i,j,n;
    printf("enter the no.of row\n");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
    for ( j = 1; j <= i; j++)
    {
      printf("%d",j);
    }
    printf("\n");
    }
}

//___________________________________________