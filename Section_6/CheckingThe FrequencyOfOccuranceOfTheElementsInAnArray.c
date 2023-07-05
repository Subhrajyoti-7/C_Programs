/*This program checks the frequency of occurance of each numbers in an array*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int array[50],size,i,j,k,count;
    printf("This program checks the frequency of occurance of each numbers in an array.");
    printf("\nEnter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the values for the array: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\n\nYour array values are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",array[i]);
    }
    for(i=0;i<size;i++)
    {
        count=1;
        for(j=i+1;j<size;j++)
        {
            if(array[j]==array[i])
            {
                count++;
            }
        }
        for(k=0;k<i;k++)
        {
            if(array[i]==array[k])
            {
                i++;
                break;
            }
        }
        printf("\nFrequency of occurance of '%d' is: %d",array[i],count);
    }
    getch ();
}
