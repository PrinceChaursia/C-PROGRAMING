// 10 number accept from user  and find their sum and average

#include <stdio.h>
void main()
{
    int i,num,sum=0,average,rows;
    printf("Enter the numbers\n\n");
    
    for (i=1;i<3;i++)
{
    scanf("%d",&num);
    sum=sum+num;
}
    printf("%d\n",sum);
    average=sum/3;
    printf("%d",average);
}