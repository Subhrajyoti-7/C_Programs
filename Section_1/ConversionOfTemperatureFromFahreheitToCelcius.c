/*This program converts temperature from Fahrenheit to Degree Celsius*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    float celsius,fahrenheit;
    printf("This program converts temperature from Fahrenheit to Degree Celsius");
    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f",&fahrenheit);
    celsius=(5.0/9.0)*(fahrenheit-32);
    printf("\n%0.2f Fahrenheit is %0.2f Degree Celsius",fahrenheit,celsius);
    getch ();
}
/*End of the program*/
