/*This program finds the LCM and HCF of two user input numbers*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int hcf,lcm,smallest,largest,i,num1,num2;
    printf("This program finds the LCM and HCF of two user input numbers.\n");
    printf("Enter your first number: ");
    scanf("%d",&num1);
    printf("\nEnter your second number: ");
    scanf("%d",&num2);
    /*finding larger and smaller number*/
    if(num1<num2)
    {
        smallest=num1;
        largest=num2;
    }
    else
    {
        smallest=num2;
        largest=num1;
    }
    /*starting i from smallest and checking divisibility with smallest and largest till i=1*/
    for(i=smallest;i>=1;i--)
    {
        if(smallest%i==0 && largest%i==0)
        {
            hcf=i;
            lcm=num1*num2/i;
            break;
        }
    }
    printf("\nHCF of %d & %d is %d",num1,num2,hcf);
    printf("\nLCM of %d & %d is %d",num1,num2,lcm);
    getch ();
}
/*End of the program*/
