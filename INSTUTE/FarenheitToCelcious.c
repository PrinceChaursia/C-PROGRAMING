// Convert fahrenheit to celsius => (F − 32) × 5/9;

#include <stdio.h>
void main()
{
    float f,celcious;
    printf("Enter the Farenheit\n");
    scanf("%f",&f);

    celcious=(f - 32)*5/9;
    printf("Celcious = %f",celcious);
}

