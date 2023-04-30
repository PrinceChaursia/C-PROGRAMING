// Write a program to print Reverse of any number.
// # include <stdio.h>
// void main ()
// {
//     int arr[10]={1123432},i,reverse,remainder;

//     while (arr[i]!=0)
//     {
//     remainder=arr[i]%10;
//     reverse=reverse*10+remainder;
//     arr[i]=arr[i]/10;
//     }

//     {
//        printf("%d\n",arr[i]);
//     }

// }
//___________________________________________________
// #include <stdio.h>
// void main()
// {
//     int num, arr[20],remainder,reverse, i;
//     printf("Enter the size of array");
//     scanf("%d", &num);
//     for (i = 0; i < num; i++)
//     {
//         printf("Enter element");
//         scanf("%d", &arr[i]);
//     }
//     printf("Even number in array are\n");
//     for (i = 0; i < num; i++)
//     {
//          remainder= arr[i] % 10;
//         reverse = reverse * 10 + remainder;
//         arr[i] = arr[i] / 10;
//         {
//             printf("%d\n", arr[i]);
//         }
//     }
// }
//_______________________________
// #include <stdio.h>

// int main() {
// //   const int MAX_SIZE = 100; // Maximum size of the array
//   int arr[100]={3134354},n; // Declare array and number of elements

//   // Read in the number of elements
// //   printf("Enter the number of elements: ");
// //   scanf("%d", &n);

// //   Read in the array elements
// //   for (int i = 0; i < n; i++) {
// //     printf("Enter element %d: ", i+1);
// //     scanf("%d", &arr[i]);
// //   }

//   printf("The reverse of each element is: ");
//   for (int i = 0; i < n; i++) {
//     int num = arr[i];
//     int rev = 0;
//     while (num > 0) {
//       int digit = num % 10;
//       rev = rev * 10 + digit;
//       num = num / 10;
//     }
//     printf("%d ", rev);
//   }
  
//   return 0;
// }
//_____________________________________________________________
// #include <stdio.h>
// void main()
// {
//     int n,arr[]={8372836},i;

// printf("The reverse of each element is: ");
//   for (int i = 0; i < n; i++) {
//     int num = arr[i];
//     int rev = 0;
//     while (num > 0) {
//       int digit = num % 10;
//       rev = rev * 10 + digit;
//       num = num / 10;
//     }
//     printf("%d ", rev);
//   }
// }
//_______________________________________________
#include <stdio.h>
void main ()
{
int arr[100]={3134354},n;
 printf("The reverse of each element is: ");
  for (int i = 0; i < n; i++) {
    int num = arr[i];
    int rev = 0;
    while (num > 0) {
      int digit = num % 10;
      rev = rev * 10 + digit;
      num = num / 10;
    }
    printf("%d ", rev);
  }
}