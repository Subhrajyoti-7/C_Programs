/*This program prints the Fibonacci series*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int number,i,n,m=0,s=1;
    printf("This program prints the Fibonacci series.\n");
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("\nThe Fibonacci series is,\n\n");
    printf("%d ",m);
    /*Finding Fibonacci series upto n terms*/
    for(i=1;i<=number-1;i++)
    {
        printf("%d ",s);  /*printing the series*/
        /*putting the logic for finding Fibonacci series*/
        n=s;
        s=s+m;
        m=n;
    }
    getch ();
}
/*End of the program*/
