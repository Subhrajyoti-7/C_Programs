/*This program checks whether a number is perfect or not*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int number,divisor=0,sum,i;
    printf("This program checks whether a number is perfect or not.\n");
    printf("Enter a number: ");
    scanf("%d",&number);
    /*checking divisibility of i with the number*/
    for(i=1;i<=number/2;i++)
        if(number%i==0)
            divisor=divisor+i;
    if(divisor==number)
        printf("%d is a Perfect number",number);
    else
        printf("%d is not a Perfect number",number);
    getch ();
}
/*End of the program*/
