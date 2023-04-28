 
// Write a program to print Leap year between two Year.
// include <stdio.h>
// void main(){
//     int a,b,i;
//     printf("Enter starting of the year\n");
//     scanf("%d",&a);
//     printf("Enter the end of the year\n");
//     scanf("%d",&b);
//     for(i=a;i<=b;i++)
//     if (i%4==0)
//     {
//         printf(" leapyear is %d\n ",i);
//     }
// }

//________________________________________________________

// #include <stdio.h>
// void main()
// {
//     int a,b,i;
//     printf("Enter the Starting year\n");
//     scanf("%d",&a);
//     printf("Enter the end of the year\n");
//     scanf("%d",&b);
//     for ( i = a; i <= b; i++)
//     if (i%4==0)
//     {
//         printf("Leap year = %d\n",i);
//     }
   //}

//_______________________________________________________________

#include <stdio.h>
void main()
{
    int a;
    for  (a= 2000; a <=2040; a++)
    if (a%4==0)
    {
     printf("Leap year %d\n",a);
    }
    
}