/*This program checks whether a number is even or odd*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int number;
    printf("This program checks whether a number is even or odd.");
    printf("\nEnter a number except 0 & 1 : ");
    scanf("%d",&number);
    if(number%2==0)
        printf("EVEN");
    else
        printf("ODD");
    getch ();
}
/*End of the program*/
