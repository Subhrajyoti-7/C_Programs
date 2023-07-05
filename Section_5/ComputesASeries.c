/*This program computes a series calculation*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
    int number,i,j,fact,m;
    float sum=1.0;
    printf("This program computes a series calculation.\n");
    printf("Enter a number: ");
    scanf("%d",&number);
    for(i=2;i<=number;i++)
    {
        fact=1;
        j=1;
        /*finding the factorial*/
        while(j<=i+1)
        {
            fact=fact*j;
            j++;
        }
        sum=sum+pow((-1),(i+1))*(float)i/fact;/*finding sumation*/
    }
    printf("\nSumation is %f",sum);
    getch ();
}
/*End of the program*/
