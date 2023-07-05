/*A student is represented by the following attributes:
− Roll number (int)
− Name (string)
− Mark in subject 1 (float)
− Mark in subject 2 (float)
− Mark in subject 3 (float)
This program uses structure to create data for 50 students and then find the total marks for each student and average mark of all students.*/

#include<stdio.h>
#include<conio.h>

typedef struct
{
    int roll;
    char name[50];
    float sub1;
    float sub2;
    float sub3;
}Student;

void main ()
{
    int n,i,j;
    printf("How many students you want to input : ");
    scanf("%d",&n);
    Student s[n];
    float sum[n],total=0,average;
    for(i=0;i<n;i++)
    {
        printf("\nEnter Roll.number of the Student-%d : ",i+1);
        scanf("%d",&s[i].roll);
        printf("\nEnter Name of the Student-%d : ",i+1);
        scanf("%s",&s[i].name);
        printf("\nEnter Mark secured in Subject-1 of %s : ",s[i].name);
        scanf("%f",&s[i].sub1);
        printf("\nEnter Mark secured in Subject-2 of %s : ",s[i].name);
        scanf("%f",&s[i].sub2);
        printf("\nEnter Mark secured in Subject-3 of %s : ",s[i].name);
        scanf("%f",&s[i].sub3);
    }
    for(i=0;i<n;i++)
    {
        sum[i]=s[i].sub1+s[i].sub2+s[i].sub3;
        total=total+sum[i];
    }
    average=total/n;

    printf("\nStudent details");
    printf("\n=================\n");
    printf("\nSl.No\tRoll.No\tStudent's Name\tTotal Marks");
    printf("\n-----\t-------\t--------------\t-----------\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%d\t%s\t\t%0.2f",i+1,s[i].roll,s[i].name,sum[i]);
        printf("\n");
    }
    printf("\n\nAverage Marks of all Students is : %0.2f",average);
    printf("\n\n---------------Program Ended---------------");
    getch ();
}