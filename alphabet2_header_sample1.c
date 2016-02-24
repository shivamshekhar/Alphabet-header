/*
alphabet2 header sample 1
made by: Shivam Shekhar
*/
#include"alphabet2.h" //including the alphabet2 header
int main()
{
    int x=2,y=2; //specify the x and y coordinate where you want your first character to get printed
    char str[20]="hello alphabet"; //the string you want to print. DON'T USE UPPER CASE ALPHABETS! Use only lower case alphabets
    char numbers[11]="0123456789"; //you can also print numbers
    printstr(x,y,str,219,_RED); //printstr is a function defined in alphabet2.h
    /*
    this function takes in 5 parameters
    1. x and,
    2. y coordinates of the place where you want your first character to get printed
    3. the string you want to print
    4. the "design" of the text. i.e the ascii character "with" which you want to fill your character. You can enter any value from 0 to 255
    5. the color. You can use predefined macros like _RED,_BLUE etc or enter any value between 0 and 255.

    this function prints a string to the console window.
    */
    y+=12; //changing the y coordinate
    printstr(x,y,numbers,177,_GREEN); // prints the second string
    getch(); //waits for keystroke
    return 0;
    /*end of program*/
}
