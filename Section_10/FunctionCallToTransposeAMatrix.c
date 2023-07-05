/*This program takes a matrix of order m*n and transpose it using function call*/
#include<stdio.h>
#include<conio.h>
int col;
void Transpose (int matrix[][col], int m, int n)
{
    int i,j;
    printf("\nTranspose Matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\t%d",matrix[j][i]);
        }
        printf("\n");
    }
}
void main ()
{
    int i,j,m,n;
    printf("This program takes a matrix of order m*n and then transpose it.");
    printf("\n---------------------------------------------------------------\n");
    printf("\nEnter a value for m: ");
    scanf("%d",&m);
    printf("\nEnter a value for n: ");
    scanf("%d",&n);
    int matrix[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nEnter value for the positon %d,%d: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nThe matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    col=n;
    Transpose(matrix,m,n);
    printf("\n-------Program Ended-------");
    getch ();
}