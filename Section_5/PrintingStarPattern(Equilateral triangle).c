/*This program prints pyramid star pattern of 'n' number of rows*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,j,n;
    printf("This program prints pyramid star pattern of 'n' number of rows.\n");
    printf("Enter a number for 'n': ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+n-1;j++)
        {
            if(j>=n+1-i&& j<=n+i-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch ();
}
/*End of the program*/
