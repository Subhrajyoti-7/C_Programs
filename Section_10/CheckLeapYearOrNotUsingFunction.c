/*This program uses function to determine whether a year is a leap year or not*/
#include<stdio.h>
#include<conio.h>
int leap(int);
void main ()
{
    int year,n;
    printf("This program checks whether a year is leap year or not");
    printf("\n------------------------------------------------------\n");
    printf("Enter an year: ");
    scanf("%d",&year);
    n=leap(year);
    if(n==1)
    {
        printf("\nThis is a leap year");
    }
    else
    {
        printf("\nThis is not a leap year");
    }
    getch ();
}

int leap(int a)
{
    int r=0;
    if(a%100==0)
    {
        if(a%400==0)
        {
            r=1;
        }
    }
    else
    {
        if(a%4==0)
        {
            r=1;
        }
    }
    return(r);
}