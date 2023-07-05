/*This program checks whether a number is Armstrong or not*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
    int number,remainder,quotient,result=0,n;
    printf("This program checks whether a number is Armstrong or not.");
    printf("\nEnter a number: ");
    scanf("%d",&number);
    n=number;
    /*continuing the loop until the number becomes zero*/
    while(number!=0)
    {
        remainder=number%10; /*finding the remainder of the number*/
        quotient=number/10;  /*finding the quotient of the number*/
        result=result+(pow(remainder,3));   /*adding cubes of all digits of the number*/
        number=quotient;
    }
    /*If the previous number is same as the resultant number, it is Armstrong*/
    if(n==result)
        printf("\n%d is an Armstrong number",n);
    else
        printf("\n%d is not an Armstrong number",n);
    getch ();
}
/*End of the program*/
