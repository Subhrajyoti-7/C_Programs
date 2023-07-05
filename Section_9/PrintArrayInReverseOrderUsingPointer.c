/*This program Displays an array elements in reverse order using pointer*/

#include<stdio.h>
#include<conio.h>

void main ()
{
    int array[10],i;
    printf("This program displays the values you entered in reverse order");
    printf("\n-------------------------------------------------------------\n\n");
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",array+i);    /*Taking values from the user by the help of pointer*/
    }
    printf("\n\nThe numbers are:  ");
    for(i=9;i>=0;i--)
    {
        printf("%d  ",*(array+i));  /*Printing the values using pointer*/
    }
    getch ();
}
/*End of the program*/
