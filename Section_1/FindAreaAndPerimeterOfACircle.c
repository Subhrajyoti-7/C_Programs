/*This program finds area and perimeter of a circle*/
#include<stdio.h>
#include<conio.h>

void main ()
{
    float radius,area,perimeter;
    const float pi=3.141;

    printf("This program computes the Area and Perimeter of a circle.");
    printf("\nEnter radius of the circle in cm: ");
    scanf("%f",&radius);

    perimeter=2*pi*radius;  /*finding perimeter of the circle*/
    area=pi*radius*radius;  /*finding area of the circle*/

    printf("\n\nArea of the circle is : %0.2f squar cm",area);
    printf("\nPerimeter of the circle is : %0.2f cm",perimeter);
    getch ();
}
/*End of the program*/
