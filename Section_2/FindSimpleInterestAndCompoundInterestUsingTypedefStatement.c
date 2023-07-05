/*This program Calculates the simple interest and compound interest*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    typedef float decimal; /*Changing name of the data type*/
    decimal p,t,r,si,ci;
    printf("This program Calculates the simple interest and compound interest.");
    printf("\nEnter Principal amount: ");
    scanf("%f",&p);
    printf("Enter Rate percentage: ");
    scanf("%f",&r);
    printf("Enter the time period: ");
    scanf("%f",&t);
    si=p*t*r/100; /*Calculating simple interest*/
    ci=p*pow((1+r/100),t)-p; /*Calculating compound interest*/
    printf("\nSimple Interest is: Rs.%0.2f",si);
    printf("\nCompound Interest is: Rs.%0.2f",ci);
    getch ();
}
/*End of the program*/
