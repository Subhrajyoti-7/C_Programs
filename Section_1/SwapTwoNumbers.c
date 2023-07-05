/*This program swaps two user input numbers*/
#include<stdio.h>
#include<conio.h>

void main ()
{
    int a,b,thirdVariable;
    printf("This program swaps two user input numbers.(If you enter a=5 & b=6 then it shows a=6 & b=5)");
    printf("\nEnter a numbers for a: ");
    scanf("%d",&a);
    printf("\nEnter a numbers for b: ");
    scanf("%d",&b);
    /*swaping values using a third variable*/
    thirdVariable=a;
    a=b;
    b=thirdVariable;
    printf("\nAfter Swaping the values, the values of a and b are,\n a=%d and b=%d\n\n",a,b);
    getch ();
}
/*End of the program*/
