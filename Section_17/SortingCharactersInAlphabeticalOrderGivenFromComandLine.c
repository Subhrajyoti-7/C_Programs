/*This program takes a line of text from command line and prints characters present in the line in alphabetical order. For example, if we type the line of text “India is my country” on command line the output should be “acdIiimnnorstuyy”.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void Sort(char str[])
{
    char str1[30],str2[30],swap;
    int i,j=0,k=0;
    /*Storing upper case characters and lower case characters in two different arrays*/
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str1[j]=str[i];     /*Storing lower case*/
            j++;
        }
        else
        {
            str2[k]=str[i];     /*Storing upper case*/
            k++;
        }
    }
    printf("\n%s\n%s",str2,str1);
    /*Sorting upper case characters in alphabetical order*/
    for(i=0;i<strlen(str2);i++)
    {
        for(j=i+1;j<strlen(str2);j++)
        {
            if(str2[j]<str2[i])
            {
                swap=str2[j];
                str2[j]=str2[i];
                str2[i]=swap;
            }
        }
    }

    /*Sorting lower case characters in alphabetical order*/
    for(i=0;i<strlen(str1);i++)
    {
        for(j=i+1;j<strlen(str1);j++)
        {
            if(str1[j]<str1[i])
            {
                swap=str1[j];
                str1[j]=str1[i];
                str1[i]=swap;
            }
        }
    }
    // printf("\n%s\n%s",str2,str1);

    /*Printing both the arrays in alphabetical order*/
    printf("\n\n");
    j=0;
    k=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str1[j]<=str2[k]+32)
        {
            if(str1[j]!='\0')
            {
                printf("%c ",str1[j]);
                j++;
            }
            else
            {
                printf("%c",str2[k]);
                k++;
            }
        }
        else
        {
            if(str2[k]!='\0')
            {
                printf("%c ",str2[k]);
                k++;
            }
            else
            {
                printf("%c",str1[j]);
                j++;
            }
        }
    }
}

// void main(int argc, char* argv[])
void main()
{
    // char *text;
    // text=(char*)malloc(100);
    // text=argv[1];
    char text[]="Hello World";
    printf("%s",text);
    Sort(text);
    printf("\n----------------Program Ended----------------\n");
    getch ();
}
/*Not Completed*/