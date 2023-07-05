/*This program counts the number of digits of a number*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int number,count=0;
    printf("This program counts the number of digits of a number.\n");
    printf("Enter a number: ");
    scanf("%d",&number);
    while(number!=0)
    {
        number=number/10;  /*finding the quotient*/
        count++;
    }
    printf("Number of all the digits of the number is %d",count);
    getch ();
}
/*End of the program*/
