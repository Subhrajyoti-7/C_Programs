/*This program uses function to take a string as input and then convert all lowercase characters to its uppercase equivalent.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void upper (char string[]);
void main ()
{
    char name[50];
    printf("This program takes your name and converts all its characters into upper case");
    printf("\n---------------------------------------------------------------------------\n");
    printf("\nEnter your name: ");
    gets(name);
    upper(name);
    puts(name);
    printf("\n-------Program ended-------");
    getch ();
}
void upper (char name[])
{
    strupr(name);
}
/*End of the program*/