/*This program uses recursive function calls to evaluate the following series:
x - (x3/3!) + (x5/5!) - (x7/7!) + …*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

float Evaluate(int, int);
int Fact(int);
void main ()
{
    int x,n;
    float result;
    printf("This program evaluates the following series: x - (x3/3!) + (x5/5!) - (x7/7!) +...");
    printf("\n--------------------------------------------------------------------------------\n");
    printf("Enter the value for x: ");  /*Takimg value of 'x'*/
    scanf("%d",&x);
    printf("How many terms you want to evaluate : ");   /*Taking number of terms*/
    scanf("%d",&n);
    n=n+n+1;
    result=Evaluate(x,n);   /*Calling a function to Evaluate the seriese and return the result*/
    printf("\nThe result of the Evaluation of the seriese is : %f",result);
    printf("\n-------Program Ended-------\n");
    getch ();
}

/*Evaluate function evaluates the seriese*/
float Evaluate(int x, int n)
{
    float result=0,power;
    if(n==1)
    {
        return 0;
    }
    power=(-1)*(pow(-1,(n-(n+1)/2)))*(float)pow(x,n-2);    /*Calculating the numerator of each term*/
    /*Calling two functions, Evaluate and Fact. Evaluate function calls itself and Fact function calculates the factorial*/
    result=result+Evaluate(x,n-2)+power/Fact(n-2);
    return (result);
}

/*Fact function calculates factorial*/
int Fact(int n)
{
    int fact=n;
    if(n==1)
    {
        return 1;
    }
    return(fact=fact*Fact(n-1));    /*Calculating factorial and calling Fact function*/
}
/*End of the program*/