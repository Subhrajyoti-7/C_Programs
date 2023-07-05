/*This program finds the transpose of a sparse matrix*/

#include<stdio.h>
#include<conio.h>
#define ROW 4
#define COL 5

void Transpose(int spMatrix[][3], int count)
{
    int i,j,k=1;
    int trMatrix[count+1][3];
    /*Transpose the sparse matrix and storing the values in trMatrix*/
    for(i=0;i<spMatrix[0][1];i++)
    {
        for(j=1;j<count+1;j++)
        {
            if(spMatrix[j][1]==i)
            {
                trMatrix[k][0]=spMatrix[j][1];
                trMatrix[k][1]=spMatrix[j][0];
                trMatrix[k][2]=spMatrix[j][2];
                k++;
            }
        }
    }
    trMatrix[0][0]=spMatrix[0][1];
    trMatrix[0][1]=spMatrix[0][0];
    trMatrix[0][2]=spMatrix[0][2];

    /*Printing the transose matrix*/
    printf("The transpose matrix is :\n");
    for(i=0;i<count+1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",trMatrix[i][j]);
        }
        printf("\n");
    }
}

void SparseMatrix(int matrix[][COL], int m, int n)
{
    int i,j,k=1,count=0;
    int spMatrix[m*n][3];

    /*Counting no zero elements*/
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix[i][j]!=0)
            {
                count++;
            }
        }
    }
    
    /*Creating sparse matrix*/
    spMatrix[0][0]=m;
    spMatrix[0][1]=n;
    spMatrix[0][2]=count;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix[i][j]!=0)
            {
                spMatrix[k][0]=i;
                spMatrix[k][1]=j;
                spMatrix[k][2]=matrix[i][j];
                k++;
            }
        }
    }

    /*Printing sparse matrix*/
    printf("\nThe Sparse Matrix is :\n");
    for(i=0;i<count+1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",spMatrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    /*Calling Transpose function to transpose the sparse matrix*/
    Transpose(spMatrix,count);
}

void main ()
{
    int matrix[ROW][COL];
    int i,j;
    printf("This program Transpose a sparse matrix of 3 tuple form.");
    printf("\n=======================================================\n");
    /*Taking values to sparse matrix*/
    printf("\nEnter the values of a %d*%d sparse matrix :\n",ROW,COL);
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    /*Printing the sparse matrix in normal form*/
    printf("\nyour given sparse matrix is :\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("\t%d",matrix[i][j]);
        }
        printf("\n");
    }

    /*Calling SparseMatrix function to convert the matrix of normal form into 3-tuple form*/
    SparseMatrix(matrix,ROW,COL);
    printf("\n---------------Program Ended---------------\n");
    getch ();
}
/*End of the program*/