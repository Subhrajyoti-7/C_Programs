/*This program takes ‘n’ numbers (the value of ‘n’ is specified at runtime) in an array and display their sum and average.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main ()
{
    int *array,size,*i,sum=0;
    float average;
    printf("This program takes 'n' numbers in an array and display their sum and average");
    printf("\n===========================================================================\n");
    printf("How many numbers you want to enter : ");
    scanf("%d",&size);
    /*Allocating memory*/
    array=(int*)malloc(size*sizeof(int));
    if(array==NULL)
    {
        printf("\nNo space is available");
        exit (0);
    }
    printf("\nSpaces allocated for %d numbers",size);
    printf("\nEnter %d numbers : ",size);
    /*Taking numbers to the array*/
    for(i=array;i<array+size;i++)
    {
        scanf("%d",i);
    }
    printf("\n");
    /*Calculating Sum*/
    for(i=array;i<array+size;i++)
    {
        sum=sum+*i;
    }
    average=(float)sum/size;    /*Calculating Average*/
    printf("\nSum of elements is %d\nAverage of elements is %0.2f",sum,average);
    printf("\n--------------Program Ended---------------\n");
    getch ();
}
/*End of the Program*/