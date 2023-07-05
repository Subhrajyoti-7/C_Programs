/*This program checks whether a student can be Admitted into a professional course or not under some criteria*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int math,phy,chem,total;
    printf("This program checks whether a student can be Admitted into a professional course or not under some criteria.");
    printf("\nEnter the marks obtained in Mathematics: ");
    scanf("%d",&math);
    printf("Enter the marks obtained in Physics: ");
    scanf("%d",&phy);
    printf("Enter the marks obtained in Chemistry: ");
    scanf("%d",&chem);
    total=math+phy+chem;
    if(math>=60 && phy>=50 && chem>=40 || total>=200) /*Checking conditions of admission*/
        printf("\nAdmitted");
    else
        printf("\nNot Admitted");
    getch ();
}
/*End of the program*/
