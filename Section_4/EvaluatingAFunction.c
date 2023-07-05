/*This program Evaluates a function*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int x,y;
    printf("This program evaluates a function.");
    printf("\nEnter a number: ");
    scanf("%d",&x);
    /*Checking conditions for x*/
    if(x>0)
        printf("y=1");
    else if(x<0)
        printf("y=-1");
    else
        printf("y=0");
    getch ();
}
/*End of the program*/
