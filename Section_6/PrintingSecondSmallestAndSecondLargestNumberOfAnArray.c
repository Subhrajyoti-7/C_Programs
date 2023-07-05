/*This program prints the second smallest and second largest number of an array*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int arrange[100],arraySize,i,j,a;
    printf("Enter a number  for array size: ");
    scanf("%d",&arraySize);
    for(i=0;i<arraySize;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&arrange[i]);
    }
    printf("\n\nYour entered values are:\n\n");
    for(i=0;i<arraySize;i++)
    {
        printf("%d\t",arrange[i]);
    }
    for(i=0;i<arraySize;i++)
    {
        for(j=i+1;j<arraySize;j++)
        {
            if(arrange[i]>arrange[j])
            {
                a=arrange[i];
                arrange[i]=arrange[j];
                arrange[j]=a;
            }
        }
    }
    printf("\n\nSecond smallest number of the array is\t:  %d",arrange[1]);
    printf("\nSecond largest number of the array is\t:  %d",arrange[arraySize-2]);
    getch ();
}
