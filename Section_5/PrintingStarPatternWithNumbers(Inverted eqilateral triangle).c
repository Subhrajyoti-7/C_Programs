/*This program prints star pattern inverse pyramid with numbers of 'n' number of rows*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,j,n,value;
    printf("This program prints star pattern inverse pyramid with numbers of 'n' number of rows.\n");
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        value=n+1-i;
        for(j=1;j<=n+n-1;j++)
        {
            if(j>=i && j<=n+n-i)
            {
                printf("%d",value);
                if(j<n)
                    value--;
                else
                    value++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    getch ();
}
/*End of the program*/
