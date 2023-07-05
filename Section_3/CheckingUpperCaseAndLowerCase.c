/*This program checks whether a character is in upper case or in lower case*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    char character;
    printf("This program checks whether a character is in upper case or in lower case.");
    printf("\nEnter a character: ");
    scanf("%c",&character);
    character>=65 && character<=90?printf("Upper case"):printf("Lower case");
    getch ();
}
/*End of the program*/
