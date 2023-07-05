/*This program calculates electric bill and displays it on the screen with customer name*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    char name[20];
    float bill;
    int unit;
    printf("This program calculates electric bill and displays it on the screen with customer name.");
    printf("\nEnter Consumer Name: ");
    gets(name);
    printf("Enter number of units consumed: ");
    scanf("%d",&unit);

    /*Checking units and calculating bill amount*/
    if(unit<=200)
        bill=(unit*0.8)+100;
    else if(unit<=300)
        bill=(200*0.8)+((unit-200)*1.3)+100;
    else
        bill=(200*0.8)+(100*1.3)+((unit-300)*2.0)+100;
    /*if the amount exceeds Rs.400 , a 15% surcharge will be added*/
    if(bill>400)
        bill=bill+((float)15/100*bill);

    printf("\nConsumer Name: ");
    puts(name); /*Printing Consumer Name*/
    printf("\nBill Amount: Rs.%0.2f",bill); /*Printing Bill Amount*/
    getch ();
}
/*End of the program*/
