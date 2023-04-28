//Program to print Table of any number.

// #include<stdio.h>
// void main()
// {
// int a;
// printf("Enter the table number\n");
// scanf("%d",&a);
// for(int i=1;i<=10;i++)
// {
//     printf("%d\n",i*a);
// }
// }
//________________________________________________________

#include <stdio.h>
void main ()
{
    int z;
    printf("Enter the table name\n");
    scanf("%d",&z);
    for ( int i = 1; i <= 10; i++)
    {
    //   printf("z%d*i%d=%d\n,z,iz*i);
      printf("%d*%d=%d\n",z,i,z*i);
    }
    
}