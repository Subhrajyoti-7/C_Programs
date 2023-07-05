/*This program takes a 4*5 matrix and display it using pointer*/

#include<stdio.h>
#include<conio.h>

void main ()
{
    int matrix[4][5],i,j;
    printf("This program takes 20 numbers and display them in an array");
    printf("\n----------------------------------------------------------\n\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Enter the value for Row %d & column %d :  ",i+1,j+1);
            scanf("%d",(*(matrix+i)+j));    /*Taking values from the user with the help of pointer*/
        }
    }
    printf("The matrix is:\n\n\t\t");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",*(*(matrix+i)+j));    /*Printing the array using pointer*/
        }
        printf("\n\n\t\t");
    }
    getch ();
}
/*End of the program*/
