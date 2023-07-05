/*This program finds the sum of digits of a four digit number*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int number,sum=0,digit1,digit2,digit3,digit4;
    printf("This program finds the sum of digits of a four digit number.");
    printf("\nEnter a four digit number: ");
    scanf("%d",&number);
    /*Finding remainder and quotient*/
    digit1=number%10;
    number=number/10;
    digit2=number%10;
    number=number/10;
    digit3=number%10;
    number=number/10;
    digit4=number%10;
    sum=digit1+digit2+digit3+digit4;
    printf("Addition of digits is %d",sum);
    getch ();
}
/*End of the program*/

