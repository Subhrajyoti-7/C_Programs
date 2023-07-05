/*This program copies the content of one file to another, where the file names are supplied to the program on command line.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(int argc, char *argv[])
{
    FILE *source, *target;
    char ch;
    printf("This program copies the content of one file to another, where the file names are supplied to the program on command line.");
    printf("\n========================================================================\n");
    source=fopen(argv[1],"r");      /*Opening the 1st file in read mode*/
    target=fopen(argv[2],"w");      /*Opening the 2nd file in write mode*/
    /*Checking file opening errors*/
    if(source==NULL || ferror(source))
    {
        printf("\nThe file \"%s\" cann't be opened",argv[1]);
        exit (0);
    }
    ch=fgetc(source);
    while(ch!=EOF)
    {
        fprintf(target,"%c",ch);    /*Copy 1st file to 2nd*/
        ch=fgetc(source);
    }
    printf("\nYour all contents of %s file is copied to the file %s",argv[1],argv[2]);
    /*Closing all opened files*/
    fclose(target);
    fclose(source);
    printf("\n---------------Program Ended---------------\n");
    getch();
}
/*End of the Program*/