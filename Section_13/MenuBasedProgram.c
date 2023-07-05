/*This program creates two one-dimensional arrays at runtime and performs the following operations as chosen by the user. Separate functions should be written for each of the following operations.
1. Insert an element in the 1st array (if size exceeds the allocated size, use 'realloc()')
2. Sort the 1st array.
3. Sort the 2nd array.
4. Merge the two arrays.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void InsertElement1(int*,int);
void Sort1(int*,int);
void Sort2(int*,int);
void Merge(int*,int*,int,int);
void main ()
{
    int *array1,*array2,*i,size1,size2,choice;
    printf("This program creates two one-dimensional arrays and performs the following operations as chosen by the user.\n1. Insert an element in the 1st array.\n2. Sort the 1st array.\n3. Sort the 2nd array.\n4. Merge the two arrays.");
    printf("\n===========================================================================\n");
    printf("\nHow many numbers you want to store in 1st array : ");
    scanf("%d",&size1);
    array1=(int*)malloc(size1*sizeof(int));
    if(array1==NULL)
    {
        printf("\nNo space available");
        exit (0);
    }
    printf("\nEnter %d numbers : ",size1);
    for(i=array1;i<array1+size1;i++)
    {
        scanf("%d",i);
    }
    printf("\nHow many numbers you want to store in 2nd array : ");
    scanf("%d",&size2);
    array2=(int*)malloc(size2*sizeof(int));
    if(array2==NULL)
    {
        printf("\nNo space available");
        exit (0);
    }
    printf("\nEnter %d numbers : ",size2);
    for(i=array2;i<array2+size2;i++)
    {
        scanf("%d",i);
    }
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            InsertElement1(array1,size1);
            break;
        case 2:
            Sort1(array1,size1);
            break;
        case 3:
            Sort2(array2,size2);
            break;;
        case 4:
            Merge(array1,array2,size1,size2);
            break;
        default:
            printf("\nYou have entered a wrong choice.");
    }
    printf("\n---------------Program Ended---------------\n");
    getch ();
}

/*Insert an element in 1st array*/
void InsertElement1(int *array,int size)
{
    int *i,insertValue,position;
    printf("\nEnter the number you want to insert : ");
    scanf("%d",&insertValue);
    printf("\nIn which position you want to insert it : ");
    scanf("%d",&position);
    array=(int*)realloc(array,(size+1)*sizeof(int));
    if(array==NULL)
    {
        printf("\nNo space available");
        exit(0);
    }
    for(i=array+size+1;i>array+position-1;i--)
    {
        *(i)=*(i-1);
    }
    *(array+position-1)=insertValue;
    for(i=array;i<array+size+1;i++)
    {
        printf(" %d",*i);
    }
}

/*sorting the 1st array*/
void Sort1(int *array, int size)
{
    int *i,*j;
    for(i=array;i<array+size;i++)
    {
        for(j=i+1;j<array+size;j++)
        {
            if(*j<=*i)
            {
                *i=*i+*j;
                *j=*i-*j;
                *i=*i-*j;
            }
        }
    }
    printf("\nAfter sortint array1 in ascending order the new array is : \n");
    for(i=array;i<array+size;i++)
    {
        printf("%d",*i);
    }
}

/*sorting the second array*/
void Sort2(int *array, int size)
{
    int *i,*j;
    for(i=array;i<array+size;i++)
    {
        for(j=i+1;j<array+size;j++)
        {
            if(*j<=*i)
            {
                *i=*i+*j;
                *j=*i-*j;
                *i=*i-*j;
            }
        }
    }
    printf("\nAfter sortint array2 in ascending order the new array is : \n");
    for(i=array;i<array+size;i++)
    {
        printf("%d",*i);
    }
}

/*merging array1 and array2*/
void Merge(int *array1, int *array2, int size1, int size2)
{
    int *i;
    printf("\nAfter Merging the 2 arrays : \n");
    for(i=array1;i<array1+size1;i++)
    {
        printf("%d",*i);
    }
    for(i=array2;i<array2+size2;i++)
    {
        printf("%d",*i);
    }
}