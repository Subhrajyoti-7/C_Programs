/*This program deletes the repeated characters in an array*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    char array[100];
    int i,j,k,size;
    printf("This program deletes repeated characters in an array\n");
    printf("Enter the size for the array (between 1 to 50): ");
    scanf("%d",&size);
    size=size*2;
    printf("\n\nEnter characters for the array: \n");
    for(i=0;i<size;i++)
    {
        scanf("%c",&array[i]);
    }
    printf("\nYour entered characters are:");
    for(i=0;i<size;i++)
    {
        printf("%c",array[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(array[j]==array[i])
            {
                for(k=j;k<size-1;k++)
                {
                    array[k]=array[k+1];
                }
                size--;
                j--;
            }
        }
    }
    printf("\nAfter deleting the repeated characters new array is :\n\n");
    for(i=0;i<size;i++)
    {
        printf("%c\t",array[i]);
    }
    getch ();
}

