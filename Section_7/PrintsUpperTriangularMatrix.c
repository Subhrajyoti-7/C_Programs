/*Printing the upper triangular matrix of a square matrix*/

#include<stdio.h>
#include<conio.h>

void main ()
{
    int n;
    printf("This program prints the upper triangular matrix of a square matrix.");
    printf("\nEnter the number of rows and column of a square matrix : ");
    scanf("%d",&n);
    int matrix[n][n],i,j;
    printf("\nEnter %d numbers\n",n*n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nThe upper triangular matrix is,\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>=i)
            {
                printf("%d\t",matrix[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n\n");
    }
    getch ();
}
