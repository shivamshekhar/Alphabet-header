/*
alphabet 2 header sample file showing various uses of alphabet2 header
Made by: Shivam Shekhar
*/
#include"alphabet2.h"
int main()
{
    int i,x=1,y=2,del=200;
    char str[20]="colored lights";
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
        switch(getch())
        {
        case '0':
            printchar('0',219,_RED,2,2);
            Sleep(del);
            printchar('0',219,_GREEN,2,2);
            break;
        case '1':
            printchar('1',219,_RED,8,2);
            Sleep(del);
            printchar('1',219,_GREEN,8,2);
            break;
        case '2':
            printchar('2',219,_RED,14,2);
            Sleep(del);
            printchar('2',219,_GREEN,14,2);
            break;
        case '3':
            printchar('3',219,_RED,20,2);
            Sleep(del);
            printchar('3',219,_GREEN,20,2);
            break;
        case '4':
            printchar('4',219,_RED,26,2);
            Sleep(del);
            printchar('4',219,_GREEN,26,2);
            break;
        case '5':
            printchar('5',219,_RED,32,2);
            Sleep(del);
            printchar('5',219,_GREEN,32,2);
            break;
        case '6':
            printchar('6',219,_RED,38,2);
            Sleep(del);
            printchar('6',219,_GREEN,38,2);
            break;
        case '7':
            printchar('7',219,_RED,44,2);
            Sleep(del);
            printchar('7',219,_GREEN,44,2);
            break;
        case '8':
            printchar('8',219,_RED,50,2);
            Sleep(del);
            printchar('8',219,_GREEN,50,2);
            break;
        case '9':
            printchar('9',219,_RED,56,2);
            Sleep(del);
            printchar('9',219,_GREEN,56,2);
            break;
        }
    }
    return 0;
}
