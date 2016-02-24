/*
alphabet2 header sample 2
made by: Shivam Shekhar
*/
#include"alphabet2.h" //including the alphabet header
int main()
{
    char str[20]="alphabet2"; //the string we want to print
    int i,x=2,y=2; //x and y coordinates of where you want to print the 1st character
    srand(time(NULL)); //seeds random numbers
    for(i=0;str[i]!='\0';i++)
    {
        printchar(str[i],rand()%5+1,rand()%7+9,x,y);
        /*
        printchar is a function defined in alphabet2.h
        it takes in 5 parameters
        1. the alphabet you want to print
        2. the "design" or the alphabet with which you want to fill your alphabet. This can be any ASCII character from 0 to 255
        3. color of the alphabet you want to print.
        4. x and,
        5. y coordinates of the place where you want your 1st character to print
        */
        x+=6; //increment the x coordinate by 6 so that the new character does not overlap over the previous one
    }
    getch(); //waits for keystroke
    return 0;
    /*End of program*/
}
