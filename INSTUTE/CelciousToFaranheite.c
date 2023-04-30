
// Convert celsius to fahrenheit => (C × 9/5) + 32

#include <stdio.h>
void main()
{
    float c, farenheit;
    printf("Enter the Celcious\n");
    scanf("%f", &c);

    farenheit = c * 9 / 5 + 32;
    printf("Farenheit = %f", farenheit);
}


