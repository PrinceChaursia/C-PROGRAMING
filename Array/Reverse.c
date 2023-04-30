//Write a program to print reverse of a number.

#include <stdio.h>
void main()
{
  int n, arr[100] = {3134354}, reverse, remainder;
  printf("The reverse of each element is: ");
  for (int i = 0; i < n; i++)
  {
    int num = arr[i];
    int reverse = 0;
    while (num > 0)
    {
      remainder = num % 10;
      reverse = reverse * 10 + remainder;
      num = num / 10;
    }
    printf("%d ", reverse);
  }
}