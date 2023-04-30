
// Surface area of cube => 6*r*r;

#include <stdio.h>
void main()
{
    int radius, area;
    printf("Enter the  radius of cube\n");

    scanf("%d", &radius);

    area = 6 * radius * radius;

    printf("Area of Cube = %d", area);
}

