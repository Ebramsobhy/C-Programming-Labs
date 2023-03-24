/* Program to display simple menu */

#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
    COORD coord={0,0};
     void gotoxy(int x,int y)
       {
       coord.X=x;
       coord.Y=y;
       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
     }

int main()
{
    char ch;
    do
    {
     gotoxy(20,3);
     printf("New\n");
     gotoxy(20,5);
     printf("Display\n");
     gotoxy(20,7);
     printf("Exit\n");
     gotoxy(20,9);
     ch=getch();
     if(ch=='n'||ch=='N')
     {
         system("cls");
         gotoxy(20,3);
         printf("New\n");
         gotoxy(20,5);
         getch();
         system("cls");
     }
     else if(ch=='d' || ch=='D')
     {
         system("cls");
         gotoxy(20,3);
         printf("Display\n");
         gotoxy(20,5);
         getch();
         system("cls");
     }
     else if(ch=='e'||ch=='E')
     {
        system("cls");
        break;
     }
    }
    while(TRUE);
    return 0;
}
