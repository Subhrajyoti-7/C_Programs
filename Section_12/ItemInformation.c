/*An item is represented by the following attributes:
− Either a model number (string) or an item code (string)
− Name (string)
− Price (float)
This program uses union to read the information for 5 items from the keyboard and print the same on the screen.*/

#include<stdio.h>
#include<conio.h>
union Item
{
    char number[30];
    char code[30];
};
struct ItemInformation
{
    union Item model;
    char name[50];
    float price;
};

void main ()
{
    int i;
    char choice;
    struct ItemInformation list[5];
    printf("This program reads the information for 5 items and print the same on the screen.");
    for(i=1;i<=5;i++)
    {
        printf("\nEnter the information about Item-%d",i);
        printf("\n===================================\n");
        printf("If you want to enter model number press 1\notherwise press any key to enter item code of the Item : ");
        choice = getche ();     /*Taking choice from the user*/
        if(choice=='1')
        {
            printf("\nEnter the Model number of the Item : ");
            scanf("%s",list[i].model.number);
        }
        else
        {
            printf("\nEnter the item code of the Item : ");
            scanf("%s",list[i].model.code);
        }
        printf("\nEnter the name of the Item : ");
        scanf("%s",list[i].name);
        printf("\nEnter the Price of the Item : ");
        scanf("%f",&list[i].price);
    }

    printf("\n\n");
    for(i=1;i<=5;i++)
    {
        printf("\n\nInformation about Item-%d",i);
        printf("\n=========================");
        if(choice=='1')
        {
            printf("\nModel number of Item\t:\t%s",list[i].model.number);
        }
        else
        {
            printf("\nItem code of the Item\t:\t%s",list[i].model.code);
        }
        printf("\nName of the Item\t:\t%s",list[i].name);
        printf("\nPrice of the Item\t:\t%0.2f",list[i].price);
    }

    printf("\n\n---------------Program Ended---------------");
    getch ();
}
/*End of the Program*/