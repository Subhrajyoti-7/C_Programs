/*This program Checks a number whether it is even or odd*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int number;
    printf("This program Checks a number whether it is even or odd.");
    printf("\nEnter a number: ");
    scanf("%d",&number);
    number%2==0?printf("The number is Even"):printf("The number is Odd");
    getch ();
}
/*End of the program*/
