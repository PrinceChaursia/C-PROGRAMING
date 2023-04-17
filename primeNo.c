// Program to check Prime number or Not.
#include <stdio.h>
void main() {
    // Write C code here
    int num,i,count=0;
    printf("enter any number\n\n");
    scanf("%d",&num);
    for (i=2;i<=num/2;i++)
    {
        if (num%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
  printf("%d  is a prime number",num );
    }
     else 
     {
        printf("%d  is not a prime number",num);
     }
}
   