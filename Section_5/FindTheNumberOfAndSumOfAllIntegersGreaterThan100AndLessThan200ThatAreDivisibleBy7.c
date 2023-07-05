/*This program computes sum of and number of all integers between 100 & 200 which are divisible by 7*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int sum=0,count=0,i;
    printf("This program computes sum of and number of all integers between 100 & 200 which are divisible by 7.\n");
    for(i=101;i<200;i++)
    {
        if(i%7==0)  /*checking divisibility by 7*/
        {
            count++;    /*counts number of integers */
            sum=sum+i;  /*compute sum of integers*/
        }
    }
    printf("Number of integers between 100 and 200 which are divisible by 7 is %d",count);
    printf("\nSum of all integers between 100 and 200 which are divisible by 7 is %d",sum);
    getch ();
}
/*End of the program*/
