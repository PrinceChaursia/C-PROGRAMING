// Program to check leap year or not.

// #include <stdio.h>
// void main()
// {
//     int a;
//     {
//     printf("Enter the Year's\n\n");
// }
// scanf("%d",&a);
// if (a%4==0)
// {
//     printf("%d it is a leap year");
// }
// else
// {
//     printf("%d Not a leap year");
// }
// }
// __________________________________________________

// #include <stdio.h>
// void main ()
// {
//     int a,year;
//     printf("Enter the Year\n\n");
//     scanf("%d",&a);
//     if (a%4==0)
//     {
//     printf("%d is a leap year",year);
//     }
//     else{
//         printf("%d is not a leap year",year);
//     }
// }
//_____________________________________________________

// #include <stdio.h>
// void main ()
// {
//     int a,b,i;
//     printf("Enter the Starting of the Year\n");
//     scanf("%d",&a);
//     printf("Enter the End of the year\n");
//     scanf("%d",&b);
//     for(i=a;i<=b;i++)
//     if (i%4==0)
// {
// printf("Leap year %d\n",i);
// }
// }
//____________________________________________________________

#include <stdio.h>
void main(){
    int a,b,i;
    printf("Enter starting of the year\n");
    scanf("%d",&a);
    printf("Enter the end of the year\n");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    if (i%4==0)
    {
        printf(" leapyear is %d\n ",i);
    }
}