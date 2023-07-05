/*An employee is represented by the following attributes:
− Employee ID
− Name
− Date of Joining (DD MM YY)
− Salary
This program reads the information of some employees from the keyboard and write it in a file given in command line, and again read the same information from the file and display it on the screen.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NoOfEmployees 2

typedef struct 
{
   int date;
   char month[10];
   int year; 
}SDate;

typedef struct
{
    int employeeID;
    char name[50];
    SDate joiningDate;
    float salary;
}SEmployee;

void main(int argc, char *argv[])
{
    SEmployee emp[NoOfEmployees];
    int i,j;
    char scan;
    FILE *fp;
    printf("An employee is represented by the following attributes:\n-Employee ID\n-Name\n-Date of Joining (DD MM YY)\n-Salary\nThis program reads the information of %d employees from the keyboard and write it in a file (file name is given in command line), and again read the same information from the file \"EmployeesInfo.txt\" and display it on the screen.",NoOfEmployees);
    printf("\n==============================================================================\n");

    /*Input details of the employee from the user by keyboard*/
    for(i=0;i<NoOfEmployees;i++)
    {
        printf("Enter Details of Employee - %d",i+1);
        printf("\n----------------------------");
        printf("\nEnter Employee ID : ");
        scanf("%d",&emp[i].employeeID);
        printf("\nEnter Employee Name : ");
        scanf("%s",emp[i].name);
        printf("\nEnter Date Of Joining (dd month yyyy) : ");
        scanf("%d %s %d",&emp[i].joiningDate.date,emp[i].joiningDate.month,&emp[i].joiningDate.year);
        printf("\nEnter Salary of the Employee : ");
        scanf("%f",&emp[i].salary);
        printf("\n\n");
    }

    /*Saving the data in the file*/
    fp=fopen(argv[1],"w");
    if(fp==NULL)
    {
        printf("\"%s\" file cann't be created.\n",argv[1]);
        exit (0);
    }
    else
    {
        printf("\"%s\" file created successfully.",argv[1]);
    }
    if(ferror(fp))
    {
        printf("\nThere is some errors while saving the data in the file.");
        exit(0);
    }
    fprintf(fp,"\nEmployee Details");
    fprintf(fp,"\n================\n");
    for(i=0;i<NoOfEmployees;i++)
    {
        fprintf(fp,"\nDetails of Employee - %d",i+1);
        fprintf(fp,"\n------------------------");
        fprintf(fp,"\nEmployee ID : %d",emp[i].employeeID);
        fprintf(fp,"\nEmployee Name : %s",emp[i].name);
        fprintf(fp,"\nDate of Joinig : %d %s %d",emp[i].joiningDate.date, emp[i].joiningDate.month, emp[i].joiningDate.year);
        fprintf(fp,"\nEmployee Salary : Rs. %0.2f /-",emp[i].salary);
        fprintf(fp,"\n\n");
    }
    printf("\nYour data is successfully saved in the file \"EmployeesInfo.txt\"");
    fclose(fp);

    /*Taking data from file "EmployeesInfo.txt" and display it on the screen*/
    printf("\n\n");
    fp=fopen(argv[1],"r");
    scan=fgetc(fp);
    while(scan!=EOF)
    {
        printf("%c",scan);
        scan=fgetc(fp);
    }
    fclose(fp);

    printf("\n---------------Program Ended---------------\n");
    getch ();
}
/*End of the Program*/