/* Program to Check Whether a Character is an Alphabet or not */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter a character\n");
    ch = getch();
    if( (ch >= 'a' && ch <= 'z') ||
        (ch >= 'A' && ch <= 'Z') )
    {
        printf("%c Is alphabet\n", ch);
    }
    else
    {
        printf("%c Is Not Alphabet\n", ch);
    }
    return 0;
}
