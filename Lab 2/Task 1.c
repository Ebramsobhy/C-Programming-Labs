/* Program to Check Whether a Number is Even or Odd */

#include <stdio.h>
#include <stdlib.h>

 int main()
{
    int number;
    scanf("%d", &number);

    if(number % 2!=0)
    {
      printf("Odd");
    }

    else
    {
      printf("Even");
    }
    return 0;
}
