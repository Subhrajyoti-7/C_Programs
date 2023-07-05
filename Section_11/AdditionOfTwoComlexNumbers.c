/*This program creates a structure COMPLEX to represent a complex number. Using the structure this program adds two complex numbers and display their sum.*/

#include<stdio.h>
#include<conio.h>

typedef struct
{
     int real;
     int img;
}COMPLEX;

void main ()
{
    COMPLEX number1,number2,result;
    printf("This program adds two complex numbers and display their sum.");
    printf("\n============================================================\n");
    printf("Enter real and imaginary part of 1st complex number : ");
    scanf("%d %d",&number1.real,&number1.img);
    printf("\nEnter real and imaginary part of 2nd complex number : ");
    scanf("%d %d",&number2.real,&number2.img); 

    printf("\n1st complex number is : %d+%di",number1.real,number1.img);
    printf("\n2nd complex number is : %d+%di",number2.real,number2.img);

    result.real=number1.real+number2.real;
    result.img=number1.img+number2.img;

    printf("\nThe resultant complex number is : %d+%di",result.real,result.img);
    printf("\n---------------Program Ended---------------");
    getch ();
}