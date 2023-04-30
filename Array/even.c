#include<stdio.h>
#define MAX 10
int main()
{
    
    int numarr[MAX];
   for (int i = 0; i < MAX; i++)
   {
        printf("enter the %d number:",i);
        scanf("%d",&numarr[i]);
   }
   

    for (int i = 0; i < MAX; i++)
    {
        if (numarr[i]%2==0)
        {
            printf(" %d is even\n",numarr[i]);
        }
        else
        {
           printf(" %d is odd\n",numarr[i]); 
        }
    }
    // for (int i = 0; i < MAX; i++)
    // {
    //     printf(" %d ",numarr[i]);
    // }
    



    return 0;
}