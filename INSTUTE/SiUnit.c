
// Simple interest => p*r*t/100;

#include <stdio.h>
void main()
{
    float p, r, t, answer;
    //  p=principal ballance,r=annual intrest rate,t=time;
    printf("Enter the principal amount ballance\n");
    scanf("%f", &p);

    printf("Enter the anual intrest rate in % \n");
    scanf("%f", &r);

    printf("Enter the time\n");
    scanf("%f", &t);

    answer = p * r * t / 100;
    printf("Simple Intrest = %f", answer);
}
