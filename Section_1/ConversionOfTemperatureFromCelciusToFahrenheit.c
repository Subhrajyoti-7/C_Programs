/*Converting Fahrenheit to degree celsius*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    float c,f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&f);
    c=(float)(5.0/9.0)*(f-32);
    printf("Temperature is %f degree celsius",c);
    getch ();
}
