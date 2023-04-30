// Convert miles to kilometer => 1.609*miles;

#include <stdio.h>
void main()
{
    float mile, kilometer;
    printf("Enter the Mile\n");
    scanf("%f", &mile);

    kilometer = 1.609 * mile;
    printf("Kilometer = %f", kilometer);
}


