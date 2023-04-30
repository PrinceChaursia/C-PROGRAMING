//   Q.1=> Print 100 values using Array.
#include <stdio.h>
void main()
{
    int i, num, arr[100];
    printf("Enter the position number\n");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)

    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= num; i++)
    {
        printf("%d,", arr[i]);
    }
}
// _____________________________________________________
// #include <stdio.h>
// void main()
// {
//     int abc[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     printf("%d", abc[2]);
// }
//__________________________________________________
