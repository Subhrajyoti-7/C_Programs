/*This program calculates the sum of each row and sum of each column of a matrix*/
#include<stdio.h>
#include<conio.h>

void main ()
{
    printf("This program calculates the sum of each row and each column of a matrix.");
    int row,column;
    printf("\n\nEnter the number of rows: ");
    scanf("%d",&row);
    printf("\nEnter the number of column: ");
    scanf("%d",&column);
    int matrix[row][column],i,j,sum=0;
    printf("\nEnter the numbers for the matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<column;j++)
        {
            sum=sum+matrix[i][j];
        }
        printf("\nThe sum of elements of row %d is : %d",i+1,sum);
    }
    printf("\n\n");
    for(i=0;i<column;i++)
    {
        sum=0;
        for(j=0;j<row;j++)
        {
            sum=sum+matrix[j][i];
        }
        printf("\nThe sum of elements of column %d is : %d",i+1,sum);
    }
    getch ();
}
