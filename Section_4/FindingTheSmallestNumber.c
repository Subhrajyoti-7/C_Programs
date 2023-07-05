/*This program finds the smallest among three numbers*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int num1,num2,num3,smallest;
    printf("This program finds the smallest among three numbers.");
    printf("\nEnter three numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    /*Comparing numbers with each other*/
    if(num1<num2 && num1<num3)
        printf("Smallest number is %d",num1);
    else if(num2<num3 && num2<num1)
        printf("Smallest number is %d",num2);
    else
        printf("Smallest number is %d",num3);
    getch ();
}
/*End of the program*/
