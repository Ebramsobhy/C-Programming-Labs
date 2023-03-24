/* Program to print total of numbers when it gets to 100 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[100];
   int c,count=0;
   printf("Enter any string\n");
   gets(str);
   for(c='a';c<='z';c++)
   {
       count=0;
       for(int i=0;str[i]!='\0';i++)
       {
           if(c==str[i])
            count++;
       }
   printf("%c %d\n",c,count);
}
  return 0;
}

