/*This program uses function and pointers to add two matrices and return the resultant matrix.*/

#include<stdio.h>
#include<conio.h>

void Add(int array[100][100],int array1[100][100],int array2[100][100],int *row,int *col);
void main ()
{
    int array[100][100],array1[100][100],array2[100][100],row,col;
    int i,j;
    printf("This program adds two matrices and return the resultant matrix.");
    printf("\n===============================================================\n");
    printf("Enter the row size of the 2 matrices : ");
    scanf("%d",&row);
    printf("\nEnter the column size of the 2 matrices : ");
    scanf("%d",&col);
    /*Adding numbers to first array by the user*/
    printf("\nEnter the values for the first matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nEnter the value of the position %d %d : ",i+1,j+1);
            scanf("%d",&array1[i][j]);
        }
    }
    /*Adding numbers to second array by the user*/
    printf("\nEnter the values for the second matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nEnter the value of the position %d %d : ",i+1,j+1);
            scanf("%d",&array2[i][j]);
        }
    }

    Add(array, array1, array2, &row, &col);     /*Calling the Add funtion*/
    /*Printing the resultant matrix returned by Add function*/
    printf("\nAfter addition of matrices the resultant matrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t%d",array[i][j]);
        }
        printf("\n");
    }
    printf("\n---------------Program Ended---------------");
    getch ();
}

void Add(int array[100][100],int array1[100][100],int array2[100][100],int *row,int *col)
{
    int i,j;
    for(i=0;i<*row;i++)
    {
        for(j=0;j<*col;j++)
        {
            array[i][j]=array1[i][j]+array2[i][j];
        }
    }
}
/*End of the program*/