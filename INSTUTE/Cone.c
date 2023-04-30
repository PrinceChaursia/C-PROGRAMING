
// // volume of cone => 1/3*pi*r*r*h.

#include <stdio.h>
void main()
{
    float height,radius,cone;
    printf("Enter the height\n:");
    scanf("%f", &height);
     printf("Enter the radius\n:");
    scanf("%f", &radius);
    cone = ((1.0 / 3.0) * 3.14159265359  * radius* radius * height);
    printf("volume of cone = %f\n", cone);
}

