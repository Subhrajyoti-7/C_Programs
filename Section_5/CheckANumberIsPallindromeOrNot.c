/*This program checks whether a number is palindrome or not*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int number,remainder,reverse=0,n;
    printf("This program checks whether a number is palindrome or not.\n");
    printf("Enter a number: ");
    scanf("%d",&number);
    n=number;
    while(number!=0)
    {
        remainder=number%10;
        number=number/10;
        reverse=reverse*10+remainder;
    }
    if(n==reverse)
        printf("\n%d is a Palindrome number",n);
    else
        printf("\n%d is not a Palindrome number",n);
    getch ();
}
/*End of the program*/
