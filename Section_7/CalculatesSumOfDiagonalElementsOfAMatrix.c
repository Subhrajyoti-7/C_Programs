/*This program calculates the sum of diagonal elements of a matrix*/

#include<stdio.h>
#include<conio.h>

void main ()
{
    printf("This program calculates the sum of diagonal elements of a square matrix.");
    int row;
    printf("\nEnter the number of rows and column of square matrix : ");
    scanf("%d",&row);
    int matrix[row][row],i,j,sum=0,sumc=0;
    printf("\nEnter the elements of the matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nMatrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        sum=sum+matrix[i][i];
        sumc=sumc+matrix[i][row-1-i];
    }
    if(row%2!=0)
    {
        sumc=sumc-matrix[(row-1)/2][(row-1)/2];
    }
    sum=sum+sumc;
    printf("\nThe sum of the diagonal elements of the square matrix is: %d",sum);
    getch ();
}
