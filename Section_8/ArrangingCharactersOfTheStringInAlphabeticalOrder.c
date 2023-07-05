/*This program arrange the characters of a word in alphabetical order*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main ()
{
    char str[30],str1[30],str2[30],swap;
    int i,j=0,k=0;
    printf("This program arrange the characters of a word in alphabetical order.");
    printf("\n--------------------------------------------------------------------\n");
    printf("Enter a word: ");
    gets(str);

    /*Storing upper case characters and lower case characters in two different arrays*/
    for(i=0;str[i]!='\0';i++)
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
    getch ();
}
/*End of the program*/