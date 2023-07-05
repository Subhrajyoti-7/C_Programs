/*This is a menu-based program to implement the following operations on a single linked list based on user’s choice.
1. Create a single linked list.
2. Traverse a single linked list.
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
    struct Node *next;
};
typedef struct Node SNode;  /*Changing the data type name "struct Node" to "SNode"*/

/*Declaring functions for each option*/
void TraverseSLL(SNode *start);
void InsertAtEndSLL(SNode *start);
SNode* InsertAtBeginSLL(SNode *start);
void InsertAtPositionSLL(SNode *start);
void DeleteEndSLL(SNode *start);
SNode* DeleteBeginSLL(SNode *start);
void DeletePositionSLL(SNode *start);
void SortSLL(SNode *start);

/*Defining CreateSLL()*/
SNode* CreateSLL()
{
    SNode *start;
    int item;
    char ch;

    start=(SNode*)malloc(sizeof(SNode));
    if(start==NULL)
    {
        printf("\nOut of space. Node can not be created.");
        return (0);
    }
    printf("\nEnter the value you want to store in first node : ");
    scanf("%d",&start->info);
    start->next=NULL;

    printf("\nDo you want to add a new node. If yes Press 'Y' or press any key to quit.");
    ch=getche();
    while(ch=='Y' || ch=='y')
    {
        InsertAtEndSLL(start);
        printf("\nDo you want to add more nodes, if yes press 'Y' or press any key to quit.");
        ch=getche();
    }
    printf("\n\nSingle linked list created succesfully.");
    return start;
}
/*End of the CreateSLL()*/

/*Defining TraverseSLL()*/
void TraverseSLL(SNode *start)
{
    SNode *ptr;
    if(start==NULL)
    {
        printf("\nThere is Nothing.\nFirst you have to create a list.");
    }
    else
    {
        ptr=start;
        printf("\nThe single linked list is :\n\n\t\t");
        while(ptr->next!=NULL)
        {
            printf("%d->",ptr->info);
            ptr=ptr->next;
        }
        printf("%d",ptr->info);
    }
}
/*End of the TraverseSLL()*/

/*Defining InsertAtEndSLL()*/
void InsertAtEndSLL(SNode *start)
{
    SNode *newNode, *ptr;
    int item;
    newNode=(SNode*)malloc(sizeof(SNode));
    if(newNode==NULL)
    {
        printf("\nOut of memory space");
        return;
    }
     
    printf("\n\nEnter the value you want to store at new node : ");
    scanf("%d",&item);
    newNode->info=item;
    newNode->next=NULL;

    ptr=start;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=newNode;
    printf("\n\nA new node with info field %d added to the linked list\n",newNode->info);
}
/*End of the InsertAtEndSLL()*/

/*Defining InseertAtBeginSLL()*/
SNode* InsertAtBeginSLL(SNode *start)
{
    SNode *newNode;
    int item;
    newNode=(SNode*)malloc(sizeof(SNode));
    if(newNode==NULL)
    {
        printf("\nNew node cann't be created.");
        return (0);
    }
    printf("\nEnter the value you want to store in new node : ");
    scanf("%d",&item);

    newNode->info=item;
    newNode->next=start;
    start=newNode;
    printf("\n\nA new node with info field %d added to the linked list\n",newNode->info);

    return start;
}
/*End of the InsertAtBeginSLL()*/

/*Defining InsertAtPositionSLL()*/
void InsertAtPositionSLL(SNode *start)
{
    SNode *newNode, *ptr, *ptr2;
    int item, position;
    newNode=(SNode*)malloc(sizeof(SNode));
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
    printf("\nA new node with info field %d added to the linked list\n",newNode->info);

}
/*End of the InsertAtPositionSLL()*/

/*Defining DeleteEndSLL()*/
void DeleteEndSLL(SNode *start)
{
    SNode *ptr, *ptr1;
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
/*End of the DeleteEndSLL()*/

/*Defining DeleteBeginSLL()*/
SNode* DeleteBeginSLL(SNode *start)
{
    SNode *ptr;
    ptr=start;
    if(ptr->next==NULL)
    {
        free(ptr);
        start=NULL;
        return start;
    }
    start=ptr->next;
    free(ptr);
    printf("\n\nThe first node is deleted succesfully.");
    return start;
}
/*End of the DeleteBeginSLL()*/

/*Defining DeletePositionSLL()*/
void DeletePositionSLL(SNode *start)
{
    SNode *ptr, *ptr1, *ptr2;
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
    printf("\n\nThe given node is deleted succesfully.");
}
/*End of the DeletePositionSLL()*/

/*Defining SortSLL()*/
void SortSLL(SNode *start)
{
    SNode *ptr1, *ptr2;
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
    printf("\n\nThe single linked list is sorted in ascending order.");
}
/*End of the SortSLL()*/

/*Defining Main ()*/
void main ()
{
    SNode *start=0;
    int choice;
    char a='1';
    printf("This program implements the following operations on a single linked list based on user's choice.\n\n1. Create a single linked list.\n2. Traverse a single linked list.\n3. Insert a node at the beginning.\n4. Insert a node at the end.\n5. Insert a node at an intermediate position after a given node.\n6. Delete the first node.\n7. Delete the last node.\n8. Delete an intermediate node.\n9. Sorting the node values.\n\n");

    while(a=='1')
    {
        printf("\n\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                start=CreateSLL();
                break;
            
            case 2:
                TraverseSLL(start);
                break;

            case 3:
                start=InsertAtBeginSLL(start);
                break;
            
            case 4:
                InsertAtEndSLL(start);
                break;
            
            case 5:
                InsertAtPositionSLL(start);
                break;
            
            case 6:
                start=DeleteBeginSLL(start);
                break;
            
            case 7:
                DeleteEndSLL(start);
                break;
            
            case 8:
                DeletePositionSLL(start);
                break;
            
            case 9:
                SortSLL(start);
                break;
            
            default :
                printf("\nYou have entered a wrong choice.");
        }

        printf("\n\nDo you want to use any other option ? if yes press '1' or press any key to exit.");
        a=getch();
    }
    printf("\n---------------Program Ended---------------\n");
    getch (); 
}
/*End of the Main ()*/
/*End of the Program*/