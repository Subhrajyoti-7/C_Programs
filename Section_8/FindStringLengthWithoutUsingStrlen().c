/*This program finds the length of a user input string without using strlen()*/

#include<stdio.h>
#include<conio.h>

void main ()
{
    char name[30];
    int i,count=0,character=0;
    printf("This program finds the length of your name.");
    printf("\n------------------------------------------\n");
    printf("Enter your Name: ");
    gets(name);
    /*Loop continues until NULL character comes*/
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]!=' ')
        {
            character++;    /*counting the actual number characters in that string i.e the spaces are excluded*/
        }
        count++;            /*counting the number of characters in that sting*/
    }
    printf("\nThe langth of your name %s is : %d",name,count);
    printf("\nThere are %d characters in your name\n\n",character);
    getch ();
}
/*End of the program*/