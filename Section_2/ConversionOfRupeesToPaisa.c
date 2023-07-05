/*Convertion of rupies to paisa*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    float rs;
    int paisa;
    printf("This program converts Rupies to Paisa.");
    printf("\nEnter your price in Rupies: ");
    scanf("%f",&rs);
    /*Converting rupies to paisa*/
    paisa=rs*100;
    printf("Your price is %d paisa",paisa);
    getch ();
}
/*End of the program*/
