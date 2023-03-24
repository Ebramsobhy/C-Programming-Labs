/* Program to Generate Multiplication Table "1*3=3, 2*3=6, ... */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number;
   int counter;
   printf("Enter Number\n");
   scanf("%d", &number);

   for(counter=1 ; counter<=10 ; counter++)
   {
       printf("%d * %d = %d \n", number, counter, number*counter);
   }
   return 0;
}
