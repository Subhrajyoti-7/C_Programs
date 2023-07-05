/*This program uses pointers function that receives a character string and a character as arguments and deletes all occurrence of this character in the string.*/
#include<stdio.h>
#include<conio.h>

void Delete(char *text, char *p);
void main ()
{
    char text[100], character;
    printf("This program receives a text and a character and deletes all occurrence of this character in the text.");
    printf("\n======================================================================================================\n");
    printf("\nEnter a text: ");
    gets(text);
    printf("\nWhich character you want to delete from the text: ");
    scanf("%c",&character);
    Delete(text, &character);
    printf("\nAfter deleting the character the new text is:\t%s",text);
    printf("\n\n-------Program Ended-------");
    getch ();
}

void Delete(char *text, char *p)
{
    int i,j;
    for(i=0;text[i]!='\0';i++)
    {
        if(text[i]==*p)
        {
            for(j=i;text[j]!='\0';j++)
            {
                text[j]=text[j+1];
            }
            i--;
        }
    }
}