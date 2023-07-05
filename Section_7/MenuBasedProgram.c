/*This is a menu based program which takes two arrays and performs some operations on user's choice*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main ()
{
    int A[50][50],B[50][50],result[50][50],i,j,k,row,column,choice;
    printf("This program performs some operations on two matrices.");
    printf("\nEnter the size of the row for the matrices(between 2-50): ");
    scanf("%d",&row);
    printf("\nEnter the size of the column for the matrices(between 2-50): ");
    scanf("%d",&column);

    /*Input values to the array 'A'*/
    printf("\nEnter the values for the matrix 'A':\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    /*Input values to the array 'B'*/
    printf("\nEnter the values for the matrix 'B':\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    /*Giving choices to the User*/
    printf("\nChoose any one of the following\n");
    printf("1. A+B\n2. A-B\n3. B-A\n4. A*B");
    printf("\nEnter the serial number as your input: ");
    scanf("%d",&choice);

    /*Putting a switch() to manipulate the operations on users choice*/
    switch(choice)
    {
        case(1):    /*Addition (A+B)*/
            for(i=0;i<row;i++)
            {
                for(j=0;j<column;j++)
                {
                    result[i][j]=A[i][j]+B[i][j];
                }
            }
            break;
        case(2):    /*Subtraction (A-B)*/  
            for(i=0;i<row;i++)
            {
                for(j=0;j<column;j++)
                {
                    result[i][j]=A[i][j]-B[i][j];
                }
            }
            break;
        case(3):    /*Subtraction (B-A)*/
            for(i=0;i<row;i++)
            {
                for(j=0;j<column;j++)
                {
                    result[i][j]=B[i][j]-A[i][j];
                }
            }
            break;
        case(4):    /*Multiplication (A*B)*/
            for(i=0;i<row;i++)
            {
                for(j=0;j<column;j++)
                {
                    result[i][j]=0;
                    for(k=0;k<column;k++)
                    {
                        result[i][j]=result[i][j]+A[i][k]+B[k][j];
                    }
                }
            }
            break;
        default:    /*Display a message to the user that He/She entered a wrong choice and Exit from the program*/
            {
                printf("\nYou have entered a wrong choice");
                exit (0);
            }
    }
    /*Display the resultant matrix to the user*/
    printf("\nThe resultant matrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n\n");
    }
    getch ();
}
/*End of the program*/