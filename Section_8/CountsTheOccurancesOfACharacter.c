/*This program counts the occurances of a specific character in a given line of text*/

#include<stdio.h>
#include<conio.h>

void main ()
{
    char text[100],character;
    int i,count=0;
    printf("This program counts the occurances of a specific character in a given line of text.");
    printf("\n-----------------------------------------------------------------------------------\n");
    printf("Enter a line of text:  ");
    gets(text);
    printf("\nEnter a character to find the occurances of that character in the text: ");
    scanf("%c",&character);

    for(i=0;text[i]!='\0';i++)
    {
        if(text[i]==character)      /*comparing the character with the whole text*/
        {
            count++;
        }
    }
    printf("\n\n%c is repeated %d times in the text.\n\n",character,count);
    getch ();
}
/*End of the program*/