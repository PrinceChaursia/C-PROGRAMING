// Write a program to print pattern.
// **********
// **      **
// *  *   * *
// *   * *  *
// *    *   *
// *   * *  *
// * *    * *
// **      **
// **********
#include <stdio.h>
void main()
{
    int n;
    printf("Enter rows\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n - i + 2 || j == n || i == j)
            {

                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
