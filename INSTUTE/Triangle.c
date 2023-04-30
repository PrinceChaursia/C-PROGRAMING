// Area of triangle => 1/2*b*h;


#include <stdio.h>
void main()
{
    float base, height, Area;

    printf("Enter base of the triangle\n");
    scanf("%f", &base);

    printf("Enter the height of the triangle\n");
    scanf("%f", &height);

    Area = 0.5 * base * height;

    printf("Area of a triangle = %f\n", Area);
}
