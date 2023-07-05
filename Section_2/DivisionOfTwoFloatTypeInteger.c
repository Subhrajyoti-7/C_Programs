/*This program divides two float type numbers and display it on the screen.*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    float num1,num2,division;
    printf("This program divides two float type numbers and displays it on the screen.\n");
    printf("Enter two fractional numbers: ");
    scanf("%f %f",&num1,&num2);
    division=num1/num2;/*Dividing first number by the second*/
    printf("\nDivision of %0.2f and %0.2f is %0.2f",num1,num2,division);
    getch();
}
/*End of the program*/
