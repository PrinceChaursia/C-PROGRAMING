
// Surface area of cylinder => 2*pi*r*r+2*pi*r*h;

#include <stdio.h>
void main()
{
    float radius, height, cylinder;

    printf("Enter the Radius of Cylinder\n");
    scanf("%f", &radius);

    printf("Enter the Height of Cylinder\n");
    scanf("%f", &height);

    cylinder = 2 * (3.14159265359) * radius * radius + 2 * (3.14159265359) * radius * height;

    printf("Area of Cylender = %f", cylinder);
}


