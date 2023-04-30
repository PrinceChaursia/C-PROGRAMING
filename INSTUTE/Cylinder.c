
 // volume of cylinder => pi*r*r*h;

#include <stdio.h>
void main()
{
    float height, radius, volume;

    printf("Enter the radius of cylinder\n:");
    scanf("%f", &radius);

    printf("Enter the height of cylinder\n:");
    scanf("%f", &height);

    volume = 3.14159265359 * radius * radius * height;
    printf("volume of cylinder = %f\n",volume);
}

