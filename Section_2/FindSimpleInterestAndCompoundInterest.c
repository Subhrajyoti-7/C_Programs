/*This program Calculates the simple interest and compound interest*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
    float principal,rate,time,si,ci;
    printf("This program Calculates the simple interest and compound interest.");
    printf("\nEnter Principal amount : ");
    scanf("%f",&principal);
    printf("Enter Rate of interest : ");
    scanf("%f",&rate);
    printf("Enter the time period : ");
    scanf("%f",&time);
    si=principal*rate*time/100;/*calculating simple interest*/
    ci=principal*pow((1+rate/100),time)-principal;/*calculating compound interest*/
    printf("\nThe simple interest is : Rs.%0.2f",si);
    printf("\nThe Compound interest is : Rs.%0.2f",ci);
    getch();
}
/*End of the program*/
