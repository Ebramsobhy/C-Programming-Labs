/* Program that takes the degree from user, and switch on it to print the corresponding Grade:
   A => Excellent
   B => Very Good
   C => Good
   D => fair
   E => failed 
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char grade;
  scanf("%c", &grade);

  switch (grade)
  {
    case 'A':
    case 'a':
      printf("Excellent");
      break;
    case 'B':
    case 'b':
      printf("Very Good");
      break;
    case 'C':
    case 'c':
      printf("Good");
      break;
    case 'D':
    case 'd':
      printf("Fair");
      break;
    case 'E':
    case 'e':
      printf("failed");
      break;
  }
 return 0;
}

