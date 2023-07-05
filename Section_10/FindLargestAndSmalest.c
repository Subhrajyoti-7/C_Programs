/*This program uses function to input a m x n matrix (of integers) and then find the largest, the 2nd largest, the smallest, and the 2nd smallest numbers in it.*/

#include<stdio.h>
#include<conio.h>

void LargeSmall(int array[100][100], int,int);
void main ()
{
    int array[100][100],row,col,i,j;
    printf("This program takes m x n matrix (of integers) and then find the largest, the 2nd largest, the smallest, and the 2nd smallest numbers in it.");
    printf("\n---------------------------------------------------------------\n");
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("\nEnter the number of columns: ");
    scanf("%d",&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nEnter the value for the position %d %d : ",i+1,j+1);
            scanf("%d",&array[i][j]);
        }
    }

    LargeSmall(array,row,col);
    printf("\nLargest number is :\t%d",array[0][0]);
    printf("\nSecond Largest is :\t%d",array[0][1]);
    printf("\nSmallest number is :\t%d",array[row-1][col-1]);
    printf("\nSecond Smallest is :\t%d",array[row-1][col-2]);

    printf("\n\n-------Program Ended-------");
    getch ();
}

void LargeSmall(int array[100][100],int row,int col)
{
    int i,j,k,l,a;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            for(k=i;k<row;k++)
            {
                for(l=j;l<col;l++)
                {
                    if(array[k][l]>=array[i][j])
                    {
                        a=array[k][l];
                        array[k][l]=array[i][j];
                        array[i][j]=a;
                    }
                }
            }
        }
    }
}