/*This program Calculates the area of a triangle using three sides*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    double side1,side2,side3,area,semiPerimeter;
    printf("This program Calculates the area of a triangle using three sides.");
    printf("\nEnter sides of a triangle in cm: ");
    scanf("%lf %lf %lf",&side1,&side2,&side3);
    semiPerimeter=(side1+side2+side3)/2.0;/*finding semi Perimeter of the triangle*/
    /*Computing area of the triangle*/
    area=(semiPerimeter*(semiPerimeter-side1)*(semiPerimeter-side2)*(semiPerimeter-side3));
    area=sqrt(area);
    printf("Area of the triangle is: %0.2lf square cm",area);
    getch ();
}
/*End of the program*/
