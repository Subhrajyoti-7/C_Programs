/*This program finds the area of a triangle using its base and height.*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    float base,height,area;
    printf("This program finds the area of a triangle using its base and height.");
    printf("\nEnter the base of the triangle in cm : ");
    scanf("%f",&base);
    printf("\nEnter the height of the triangle in cm : ");
    scanf("%f",&height);
    /*Finding the area of the triangle*/
    area=base*height/2;
    printf("\nArea of the triangle is : %f cm",area);
    getch ();
}
/*End of the program*/
