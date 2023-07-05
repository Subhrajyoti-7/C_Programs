/*This program uses function and pointers that compares two integer arrays to see whether they are identical. The function returns 1 if they are identical, 0 otherwise.*/

#include<stdio.h>
#include<conio.h>
int Compare(int array1[], int arra2[], int *size1, int *size2);
void main ()
{
    int array1[100], array2[100],i,size1,size2,count;
    printf("This program compares two integer arrays to see whether they are identical.");
    printf("\n===========================================================================\n");
    printf("How many numbers you want to store in first array : ");
    scanf("%d",&size1);
    printf("\nEnter numbers for the first array :\n");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("How many numbers you want to store in second array : ");
    scanf("%d",&size2);
    printf("\nEnter numbers for the first array :\n");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&array2[i]);
    }

    count=Compare(array1,array2,&size1,&size2);
    if(count==0)
    {
        printf("\nTwo arrays are not Identical");
    }
    else
    {
        printf("\nTwo arrays are Identical");
    }
    printf("\n---------------Program Ended---------------");
    getch ();
}

int Compare(int array1[], int array2[], int *size1, int *size2)
{
    int i;
    if(*size1==*size2)
    {
        for(i=0;i<*size1;i++)
        {
            if(array1[i]!=array2[i])
            {
                return 0;
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }
}