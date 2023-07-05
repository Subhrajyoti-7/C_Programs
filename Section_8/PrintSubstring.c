/*This program prints the substring from the position p1 to p2 given by the user*/

#include<stdio.h>
#include<conio.h>

void main ()
{
    char str[50];
    int i,p1,p2;
    printf("This program prints the substring of a text from the position p1 to p2");
    printf("\n----------------------------------------------------------------------\n");
    printf("Enter a text: ");
    gets(str);
    printf("\nEnter the value of p1: ");
    scanf("%d",&p1);
    printf("\nEnter the value of p2: ");
    scanf("%d",&p2);
    /*Printing the characters in between p1 and p2*/
    printf("\nThe substring is: ");
    for(i=p1-1;i<p2;i++)
    {
        printf("%c",str[i]);
    }
    getch ();
}
/*End of the program*/