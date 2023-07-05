/*This program checks whether a matrix is symmetric or not*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main ()
{   
    int matrix[100][100],n,i,j;
    printf("This program checks whether a given matrix is symmetric or not.");
    printf("\nEnter the number of rows and column of a square matrix(n*n) :  ");
    scanf("%d",&n);
    printf("\nEnter the values for the matrix :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix[i][j]!=matrix[j][i])
            {
                printf("Not Symmetric");
                getch ();
                exit(0);
            }
        }
    }
    printf("Symmetric");
    getch ();
}
