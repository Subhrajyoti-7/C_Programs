/*This program converts a sparse matrix given in regular form to 3-tuple form.*/

#include<stdio.h>
#include<conio.h>
#define ROW 4
#define COL 5

void SparseMatrix(int matrix[ROW][COL]);
void main ()
{
    int matrix[ROW][COL];
    int i,j;
    printf("This program converts a sparse matrix given in regular form to 3-tuple form.");
    printf("\n============================================================================\n");

    /*Taking values to the matrix from user*/
    printf("Enter the values of a %d*%d matrix\n",ROW,COL);
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    
    /*Printing the matrix in normal form*/
    printf("\nYou have entered this matrix :\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("\t%d",matrix[i][j]);
        }
        printf("\n");
    }
    SparseMatrix(matrix);   /*Calling SparseMtrix function*/
    printf("\n---------------Program Ended---------------\n");
    getch ();
}

void SparseMatrix(int matrix[][COL])
{
    int i,j,count=0,r=1;
    int newMatrix[ROW*COL][3];
    
    /*Counting the non-zero elements*/
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            if(matrix[i][j]!=0)
            {
                count++;
            }
        }
    }
    
    /*Creating a sparse matrix in 3 tuple form*/
    newMatrix[0][0]=ROW;
    newMatrix[0][1]=COL;
    newMatrix[0][2]=count;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            if(matrix[i][j]!=0)
            {
                newMatrix[r][0]=i;
                newMatrix[r][1]=j;
                newMatrix[r][2]=matrix[i][j];
                r++;
            }
        }
    }

    /*Printing the Sparse matrix of 3-tuple form*/
    printf("\nThe matrix in 3-Tuple form is :\n");
    for(i=0;i<count+1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",newMatrix[i][j]);
        }
        printf("\n");
    }
}
/*End of the program*/