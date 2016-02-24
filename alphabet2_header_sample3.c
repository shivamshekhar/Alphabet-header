/*
alphabet 2 header sample file showing various uses of alphabet2 header
Made by: Shivam Shekhar
*/
#include"alphabet2.h"
int main()
{
    int i,x=1,y=2,del=200;
    char str[20]="colored lights",keypressed;
    COORD text={2,10},zerozero={0,0};
    printstr(2,2,"press any key to continue",158,_YELLOW);
    getch();
    system("cls");
    srand(time(NULL));
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            x+=2;
        else
        {
            printchar(str[i],219,rand()%7+9,x,y);
            x+=6;
        }
        Sleep(200);
    }
    while(!kbhit())
    {
        x=1; y=2;
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]==' ')
                x+=2;
            else
            {
                printchar(str[i],219,rand()%7+9,x,y);
                x+=6;
            }
        }
        Sleep(100);
    }
    getch();
    system("cls");
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),text);
    printf("press any number key");
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),zerozero);
    printstr(2,2,"0123456789",219,_GREEN);
    while(1)
    {
        keypressed=getch();
        if(keypressed>47 && keypressed<58)
        {
            printchar(keypressed,219,_RED,2 + 6*(keypressed-48),2);
            Sleep(del);
            printchar(keypressed,219,_GREEN,2 + 6*(keypressed-48),2);
        }
    }
    return 0;
}
