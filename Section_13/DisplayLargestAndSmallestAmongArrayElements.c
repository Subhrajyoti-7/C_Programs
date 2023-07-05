/*This program takes ‘n’ numbers (the value of ‘n’ is specified at runtime) in an array and display the largest and smallest among them.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main ()
{
    int *array,size,*i,*j;
    printf("This program takes 'n' numbers in an array and display the largest and smallest among them.");
    printf("\n=================================================================================================\n");
    printf("How many numbers you want to enter : ");
    scanf("%d",&size);
    /*Allocating Memory*/
    array=(int*)calloc(size,sizeof(int));
    if(array==NULL)
    {
        printf("\nSpace is not available.");
        exit (0);
    }
    printf("\nSpace is succesfully allocated for %d numbers.",size);
    /*Taking numbers to the array*/
    printf("\nEnter %d numbers : ",size);
    for(i=array;i<array+size;i++)
    {
        scanf("%d",i);
    }

    /*Arranging array in descending order*/
    for(i=array;i<array+size;i++)
    {
        for(j=i+1;j<array+size;j++)
        {
            if(*j>=*i)
            {
                *i=*i+*j;
                *j=*i-*j;
                *i=*i-*j;
            }
        }
    }

    /*Printing largest and smalllest*/
    printf("\nLargest number is : %d",*array);
    printf("\nSmallest number is : %d",*(array+size-1));
    printf("\n---------------Program Ended---------------\n");
    getch ();
}
/*End of the program*/