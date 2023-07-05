/*This is a menu-based program to implement the following operations on a Double linked list based on user’s choice.
1. Create a Double linked list.
2. Traverse a Double linked list.
3. Insert a node at the beginning.
4. Insert a node at the end.
5. Insert a node at an intermediate position after a given node.
6. Delete the first node.
7. Delete the last node.
8. Delete an intermediate node.
9. Sorting the node values.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
/*Creating a structure for Nodes*/
struct Node
{
    int info;
    struct Node *prev;
    struct Node *next;
};
typedef struct Node DNode;  /*Changing the data type name "struct Node" to "DNode"*/

/*Declaring functions for each option*/
void TraverseDLL(DNode *start);
void InsertAtEndDLL(DNode *start);
DNode* InsertAtBeginDLL(DNode *start);
void InsertAtPositionDLL(DNode *start);
void DeleteEndDLL(DNode *start);
DNode* DeleteBeginDLL(DNode *start);
void DeletePositionDLL(DNode *start);
void SortDLL(DNode *start);

/*Defining CreateDLL()*/
DNode* CreateDLL()
{
    DNode *start;
    int item;
    char ch;

    start=(DNode*)malloc(sizeof(DNode));
    if(start==NULL)
    {
        printf("\nOut of space. Node can not be created.");
        return (0);
    }
    printf("\nEnter the value you want to store in first node : ");
    scanf("%d",&start->info);
    start->next=NULL;
    start->prev=NULL;

    printf("\nDo you want to add a new node. If yes Press 'Y' or press any key to quit.");
    ch=getche();
    while(ch=='Y' || ch=='y')
    {
        InsertAtEndDLL(start);
        printf("\nDo you want to add a new node. If yes press 'Y' or press any key to quit.");
        ch=getche();
    }
    printf("\n\nDouble linked list created succesfully.");
    return start;
}
/*End of the CreateDLL()*/

/*Defining TraverseDLL()*/
void TraverseDLL(DNode *start)
{
    DNode *ptr;
    if(start==NULL)
    {
        printf("\nThere is Nothing.\nFirst you have to create a list.");
    }
    else
    {
        ptr=start;
        printf("\nThe Double linked list is :\n\n\t\t");
        while(ptr->next!=NULL)
        {
            printf("%d <-> ",ptr->info);
            ptr=ptr->next;
        }
        printf("%d",ptr->info);
    }
}
/*End of the TraverseDLL()*/

/*Defining InsertAtEndDLL()*/
void InsertAtEndDLL(DNode *start)
{
    DNode *newNode, *ptr;
    int item;
    newNode=(DNode*)malloc(sizeof(DNode));
    if(newNode==NULL)
    {
        printf("\nOut of memory space");
        return;
    }
    ptr=start;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    printf("\n\nEnter the value you want to store in new node : ");
    scanf("%d",&item);
    newNode->info=item;
    newNode->next=NULL;
    newNode->prev=ptr;
    ptr->next=newNode;
    printf("\n\nA new node with info field %d is added to the linked list\n",newNode->info);
}
/*End of the InsertAtEndDLL()*/

/*Defining InseertAtBeginDLL()*/
DNode* InsertAtBeginDLL(DNode *start)
{
    DNode *newNode;
    int item;
    newNode=(DNode*)malloc(sizeof(DNode));
    if(newNode==NULL)
    {
        printf("\nNew node cann't be created.");
        return (0);
    }
    printf("\nEnter the value you want to store in new node : ");
    scanf("%d",&item);

    newNode->info=item;
    newNode->next=start;
    newNode->prev=NULL;
    start=newNode;
    printf("\n\nA new node with info field %d is added to the linked list\n",newNode->info);

    return start;
}
/*End of the InsertAtBeginDLL()*/

/*Defining InsertAtPositionDLL()*/
void InsertAtPositionDLL(DNode *start)
{
    DNode *newNode, *ptr, *ptr2;
    int item, position;
    newNode=(DNode*)malloc(sizeof(DNode));
    if(newNode==NULL)
    {
        printf("\nOut of Memory space.");
        return;
    }
    printf("\nAfter which number you want to store the new number : ");
    scanf("%d",&position);
    printf("\nEnter the new number you want to store in new node : ");
    scanf("%d",&item);

    if(start==NULL)
    {
        printf("\nEmpty space.");
        return;
    }
    
    ptr=start;
    while(ptr->info!=position)
    {
        ptr=ptr->next;
    }
    ptr2=ptr->next;

    ptr->next=newNode;
    newNode->info=item;
    newNode->next=ptr2;
    newNode->prev=ptr;
    printf("\nA new node with info field %d is added to the linked list\n",newNode->info);

}
/*End of the InsertAtPositionDLL()*/

/*Defining DeleteEndDLL()*/
void DeleteEndDLL(DNode *start)
{
    DNode *ptr, *ptr1;
    ptr=start;
    while(ptr->next!=NULL)
    {
        ptr1=ptr;
        ptr=ptr->next;

    }
    ptr1->next=NULL;
    free(ptr);
    printf("\n\nThe last node is deleted succesfully.");
}
/*End of the DeleteEndDLL()*/

/*Defining DeleteBeginDLL()*/
DNode* DeleteBeginDLL(DNode *start)
{
    DNode *ptr;
    ptr=start;
    if(ptr->next==NULL)
    {
        free(ptr);
        start=NULL;
        return start;
    }
    start=ptr->next;
    start->prev=NULL;
    free(ptr);
    printf("\n\nThe first node is deleted succesfully.");
    return start;
}
/*End of the DeleteBeginDLL()*/

/*Defining DeletePositionDLL()*/
void DeletePositionDLL(DNode *start)
{
    DNode *ptr, *ptr1, *ptr2;
    int item;
    ptr=start;
    printf("\nWhich info you want to delete : ");
    scanf("%d",&item);
    while(ptr->info!=item)
    {
        ptr1=ptr;
        ptr=ptr->next;
    }
    ptr2=ptr->next;
    free(ptr);
    ptr1->next=ptr2;
    ptr2->prev=ptr1;
    printf("\n\nThe given node is deleted succesfully.");
}
/*End of the DeletePositionDLL()*/

/*Defining SortDLL()*/
void SortDLL(DNode *start)
{
    DNode *ptr1, *ptr2;
    int temp;
    for(ptr1=start;ptr1->next!=NULL;ptr1=ptr1->next)
    {
        for(ptr2=ptr1->next;ptr2!=NULL;ptr2=ptr2->next)
        {
            if(ptr2->info<ptr1->info)
            {
                temp=ptr1->info;
                ptr1->info=ptr2->info;
                ptr2->info=temp;
            }
        }
    }
    printf("\n\nThe Double linked list is sorted in ascending order.");
}
/*End of the SortDLL()*/

/*Defining Main ()*/
void main ()
{
    DNode *start=0;
    int choice;
    char a='1';
    printf("This program implements the following operations on a Double linked list based on user's choice.\n\n1. Create a Double linked list.\n2. Traverse a Double linked list.\n3. Insert a node at the beginning.\n4. Insert a node at the end.\n5. Insert a node at an intermediate position after a given node.\n6. Delete the first node.\n7. Delete the last node.\n8. Delete an intermediate node.\n9. Sorting the node values.\n\n");

    while(a=='1')
    {
        printf("\n\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                start=CreateDLL();
                break;
            
            case 2:
                TraverseDLL(start);
                break;

            case 3:
                start=InsertAtBeginDLL(start);
                break;
            
            case 4:
                InsertAtEndDLL(start);
                break;
            
            case 5:
                InsertAtPositionDLL(start);
                break;
            
            case 6:
                start=DeleteBeginDLL(start);
                break;
            
            case 7:
                DeleteEndDLL(start);
                break;
            
            case 8:
                DeletePositionDLL(start);
                break;
            
            case 9:
                SortDLL(start);
                break;
            
            default :
                printf("\nYou have entered a wrong choice.");
        }

        printf("\n\nDo you want to use any other option ? if yes press '1' or press any key to exit.");
        a=getch();
    }
    printf("\n");
    TraverseDLL(start);
    printf("\n\n---------------Program Ended---------------\n");
    getch (); 
}
/*End of the Main ()*/
/*End of the Program*/