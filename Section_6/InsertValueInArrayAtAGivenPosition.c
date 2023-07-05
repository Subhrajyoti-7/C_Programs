/*This program takes array values and insert another value at a given position*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int array[50],i,position,size,newElement;
    printf("This program inserts a new element in an array at a given position.");
    printf("\nEnter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the values for the array: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\n\nEnter the position where you want to put the new element(Between 1 to %d): ",size);
    scanf("%d",&position);
    printf("\nEnter the new element: ");
    scanf("%d",&newElement);
    for(i=size+1;i>position-1;i--)
    {
        array[i]=array[i-1];
    }
    size++;
    array[position-1]=newElement;
    for(i=0;i<size;i++)
    {
        printf("%d\t",array[i]);
    }
    getch ();
}
