// Write a program to print pattern.
// ********
// *      *
// *      *
// ********
//____________________________________________________________

#include <stdio.h>
    void
    main()
{
    int n;
    printf("Enter the no.of row\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
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
//__________________________________________________________
