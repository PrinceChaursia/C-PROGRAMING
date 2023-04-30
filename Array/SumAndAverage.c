// // Write a program to print Sum and average of any number.

// #include <stdio.h>
// void main()
// {
//     int num, i, sum, average;
//     printf("enter the number of elements\n");
//     scanf("%d", &num);
//     int arr[num];
//     printf("enter the elements");
//      for (i = 0; i < num; i++)
//     {
//         scanf("%d", &arr[i]);
//             sum = + arr[i];
//         printf("sum = %d\n", sum);
//     }
//     average = sum / num;
//     printf("Average = %d\n", average);
// }

//_______________________________________________________
#include <stdio.h>
void main()
{
    int n, i, sum, avg;
    printf("Enter the number of elements\n ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
      
    }
    avg = sum / n;
      printf("Sum = %d\n", sum);
    printf("Average = %d\n", avg);
}


// find out the largest and smallest number in array.
//find out the missing number in an array.
//Remove duplicate number in array.