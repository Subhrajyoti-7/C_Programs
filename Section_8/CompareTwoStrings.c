/*This program compares two strings without using strcmp()*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void main ()
{
    char str1[30],str2[30];
    int i;
    printf("This program compares two given text.");
    printf("\n-------------------------------------\n");
    printf("Enter the first text: ");
    gets(str1);
    printf("\nEnter the second text: ");
    gets(str2);
    /*If the strings are identical then their lengths are same otherwise it is not identical*/
    if(strlen(str1)==strlen(str2))
    {
       for(i=0;i<strlen(str1);i++)
        {
            if(str1[i]!=str2[i])    /*Comparing two strings character by character*/
            {
                printf("\nThis two texts are not Identical");
                getch ();
                exit (0);
            }
        }
    }
    else
    {
        /*If the strings are not identical then it prints not identical and exit from the program*/
        printf("\nThis two texts are not Identical");
        getch ();
        exit (0);
    }
    {
        printf("\nThis two texts are Identical");
    }
    getch ();
}
/*End of the program*/
