/*This program checks whether a matrix is symmetric or not*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int matrix1[4][4],matrix2[4][4],i,j,n;
    printf("This program checks whether a matrix is symmetric or not.");
    //printf("Enter the value for 'n' (for n*n matrix): ");
    //scanf("%d",&n);
    printf("\nEnter values for matrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            matrix2[i][j]=matrix1[j][i];
        }
    }
    printf("\n\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }
    /*printf("\n\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {

        }
        printf("\n");
    }*/
    getch ();
}
