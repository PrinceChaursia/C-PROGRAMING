// Write a program to print pattern.
// 1
// 12
// 123
// 1234
// 12345
//_______________________________________

// #include <stdio.h>
// void main()
// {
//     int i,j,n;
//     printf("enter the no.of row\n");
//     scanf("%d",&n);
//     for ( i = 1; i <= n; i++)
//     {
//     for ( j = 1; j <= i; j++)
//     {
//       printf("%d",j);
//     }
//     printf("\n");
//     }
// }

//___________________________________________

// Write a program to print pattern.
// *
// **
// ***
// ****
// *****
//______________________________________________

// #include <stdio.h>
// void main()
// {
//     int i,j,n;
//     printf("Enter the row\n");
//    scanf("%d",&n);
//    for  (i = 1; i <= n; i++)
//    {
//     for ( j = 1; j <= i; j++)
//     {
//         printf("*");
//     }
//     printf("\n");
//    }

// }

//_____________________________________________________

// Write a program to print pattern.
// ********
// ********
// ********
// ********
// ********
// ********
// ********
// ********
//_______________________________________________________

// #include <stdio.h>
// void main()
// {
//     int i,j,n;
//     printf("Enter the row\n");
//     scanf("%d",&n);
//     for ( i = 1; i <=n; i++)
//     {
//         for ( j = 1; j <= n; j++)
//         {
//        printf("*");
//         }
//         printf("\n");
//     }
// }

//___________________________________________________________

// Write a program to print pattern.
// ********
// *      *
// *      *
// ********
//____________________________________________________________

// #include <stdio.h>
// void main()
// {
//     int n;
//     printf("Enter the no.of row\n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == 1 || i == n || j == 1 || j == n)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }
//__________________________________________________________

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
