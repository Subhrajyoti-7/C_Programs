/*This is a menu based program of two arrays*/

#include<stdio.h>
#include<conio.h>

void main ()
{
    int sizeA,sizeB,i,choice,loop;
    char more='Y';
    printf("This program takes two lists of numbers 'A' & 'B' and does some operations based on users choice.");
    printf("\n-------------------------------------------------------------------------------------------------\n\n");
    printf("How many numbers you want to store in list A: ");
    scanf("%d",&sizeA);
    printf("\nHow many numbers you want to store in list B: ");
    scanf("%d",&sizeB);

    int listA[sizeA],listB[sizeB];  /*declaring two arrays*/
    printf("\nEnter numbers to store in list 'A':\n");
    for(i=0;i<sizeA;i++)
    {
        scanf("%d",&listA[i]);  /*Taking values for array A*/
    }
    printf("\n\nEnter numbers to store in list 'B':\n");
    for(i=0;i<sizeB;i++)
    {
        scanf("%d",&listB[i]);  /*Taking values for array B*/
    }
    while(more=='Y' || more=='y')   /*Loop to use one more option. If the user press y or Y it continues else it ends*/
    {
        /*Showing the options to the user*/
        printf("\n\nPlease choose any one option given below.");
        printf("\n1.Traverse A");
        printf("\n2.Traverse B");
        printf("\n3.Insert a new number in A");
        printf("\n4.Insert a new number in B");
        printf("\n5.Delete a number from A");
        printf("\n6.Delete a number from B");
        printf("\n7.Search a number in A");
        printf("\n8.Search a number in B");
        printf("\n9.Sort A in ascending order");
        printf("\n10.Sort B in ascending order");
        printf("\n11.Merge A and B to form a new list C");

        loop=1;
        while(loop)     /*Start a loop for wrong choice and it continues until the user entered an existing choice*/
        {
            loop--;
            printf("\n\nEnter your choice: ");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                    {       /*Traverse of array A*/
                        printf("\nYou have chosen  1.Traverse of A");
                        printf("\n\nTraverse of A is:\n");
                        for(i=0;i<sizeA;i++)
                        {
                            printf("List[%d]= %d\n",i+1,listA[i]);
                        }
                        break;
                    }
                case 2:
                    {       /*Traverse of array B*/
                        printf("\nYou have chosen  2.Traverse of B");
                        printf("\n\nTraverse of B is:\n");
                        for(i=0;i<sizeB;i++)
                        {
                            printf("List[%d]= %d\n",i+1,listB[i]);
                        }
                        break;
                    }
                case 3:
                    {       /*Insert a new number in A*/
                        int position,number;
                        printf("\nYou have chosen   3.Insert a new number in A");
                        printf("\nIn which position you want to insert a new number: ");
                        scanf("%d",&position);
                        printf("\nEnter the number you want to insert: ");
                        scanf("%d",&number);
                        for(i=sizeA;i>=position+1;i--)
                        {
                            listA[i]=listA[i-1];
                        }
                        sizeA--;
                        listA[position+1]=number;
                        printf("\nAfter insertion the new list is: ");
                        for(i=0;i<sizeA;i++)
                        {
                            printf("%d\t",listA[i]);
                        }
                        break;
                    }
                case 4:
                    {
                                /*Insert a new number in B*/
                        int position,number;
                        printf("\nYou have chosen   4.Insert a new number in B");
                        printf("\nIn which position you want to insert a new number: ");
                        scanf("%d",&position);
                        printf("\nEnter the number you want to insert: ");
                        scanf("%d",&number);
                        for(i=sizeB;i>=position+1;i++)
                        {
                            listB[i]=listB[i-1];
                        }
                        sizeB--;
                        listB[position+1]=number;
                        printf("\nAfter insertion the new list is: ");
                        for(i=0;i<sizeB;i++)
                        {
                            printf("%d\t",listB[i]);
                        }
                        break;
                    }
                case 5:
                    {       /*Delete a number from A*/
                        int number,count=0,position;
                        printf("\nYou have chosen   5.Delete a number from list A");
                        while(count==0)
                        {
                            printf("\nWhich number you want to delete: ");
                            scanf("%d",&number);
                            for(i=0;i<sizeA;i++)
                            {
                                if(listA[i]==number)
                                {
                                    count++;
                                }
                            }
                            if(count>1)
                            {
                                printf("\nThere are more than one number of %d.",number);
                                printf("\nEnter the position of the number: ");
                                scanf("%d",&position);
                                sizeA--;
                                for(i=position-1;i<sizeA;i++)
                                {
                                    listA[i]=listA[i+1];
                                }
                            }
                            else if(count==1)
                            {
                                for(i=0;i<sizeA;i++)
                                {
                                    if(listA[i]==number)
                                    {
                                        position=i;
                                    }
                                }
                                sizeA--;
                                for(i=position;i<sizeA;i++)
                                {
                                    listA[i]=listA[i+1];
                                }
                            }
                            else
                            {
                                printf("\nThe number you have entered does not exist in the list.");
                                printf("\nPlease enter a desired number.\n");
                            }
                        }
                        for(i=0;i<sizeA;i++)
                        {
                            printf("%d\t",listA[i]);
                        }
                        break;
                    }
                case 6:
                    {       /*Delete a number from B*/
                        int number,count=0,position;
                        printf("\nYou have chosen   6.Delete a number from list B");
                        while(count==0)
                        {
                            printf("\nWhich number you want to delete: ");
                            scanf("%d",&number);
                            for(i=0;i<sizeB;i++)
                            {
                                if(listB[i]==number)
                                {
                                    count++;
                                }
                            }
                            if(count>1)
                            {
                                printf("\nThere are more than one number of %d.",number);
                                printf("\nEnter the position of the number: ");
                                scanf("%d",&position);
                                sizeB--;
                                for(i=position-1;i<sizeB;i++)
                                {
                                    listB[i]=listB[i+1];
                                }
                            }
                            else if(count==1)
                            {
                                for(i=0;i<sizeB;i++)
                                {
                                    if(listB[i]==number)
                                    {
                                        position=i;
                                    }
                                }
                                sizeB--;
                                for(i=position;i<sizeB;i++)
                                {
                                    listB[i]=listB[i+1];
                                }
                            }
                            else
                            {
                                printf("\nThe number you have entered does not exist in the list.");
                                printf("\nPlease enter a desired number.\n");
                            }
                        }
                        for(i=0;i<sizeB;i++)
                        {
                            printf("%d\t",listB[i]);
                        }
                        break;
                    }
                case 7:
                    {       /*Search a number in A*/
                        int number,count=0;
                        printf("\nYou have chosen   7.Search a number in A");
                        printf("\nEnter the number you want to search: ");
                        scanf("%d",&number);
                        for(i=0;i<sizeA;i++)
                        {
                            if(listA[i]==number)
                            {
                                break;
                            }
                            else
                            {
                                count++;
                            }
                        }
                        if(count==0)
                            {
                                printf("\nThe number is present in the list");
                            }
                        else
                            {
                                printf("\nThe number is not present in the list");
                            }
                        break;
                    }
                case 8:
                    {       /*Search a number in B*/
                        int number,count=0;
                        printf("\nYou have chosen   8.Search a number in B");
                        printf("\nEnter the number you want to search: ");
                        scanf("%d",&number);
                        for(i=0;i<sizeB;i++)
                        {
                            if(listB[i]==number)
                            {
                                count=0;
                                break;
                            }
                            else
                            {
                                count++;
                            }
                        }
                        if(count==0)
                            {
                                printf("\nThe number is present in the list");
                            }
                        else
                            {
                                printf("\nThe number is not present in the list");
                            }
                        break;
                    }
                case 9:
                    {       /*Sort list A in ascending order*/
                        int j,swap;
                        printf("\nYou have entered choice   9.Sort A in ascending order");
                        for(i=0;i<sizeA;i++)
                        {
                            for(j=i+1;j<sizeA;j++)
                            {
                                if(listA[j]<listA[i])
                                {
                                    swap=listA[j];
                                    listA[j]=listA[i];
                                    listA[i]=swap;
                                }
                            }
                        }
                        printf("\nAfter sorting the list in ascending order the new list is:\n\n\t");
                        for(i=0;i<sizeA;i++)
                        {
                            printf("%d ",listA[i]);
                        }
                        break;
                    }
                case 10:
                    {       /*Sort list B in ascending order*/
                        int j,swap;
                        printf("\nYou have entered choice   10.Sort B in ascending order");
                        for(i=0;i<sizeB;i++)
                        {
                            for(j=i+1;j<sizeB;j++)
                            {
                                if(listB[j]<listB[i])
                                {
                                    swap=listB[j];
                                    listB[j]=listB[i];
                                    listB[i]=swap;
                                }
                            }
                        }
                        printf("\nAfter sorting the list in ascending order the new list is:\n\n\t");
                        for(i=0;i<sizeB;i++)
                        {
                            printf("%d ",listB[i]);
                        }
                        break;
                    }
                case 11:
                    {       /*Merge list A & B in a new list list C*/
                        int sizeC=sizeA+sizeB;
                        int listC[sizeC];
                        printf("\nYou have chosen   11.Merge A & B to form a new List C");
                        for(i=0;i<sizeA;i++)
                        {
                            listC[i]=listA[i];
                        }
                        for(i=sizeA;i<sizeC;i++)
                        {
                            listC[i]=listB[i-sizeA];
                        }
                        printf("\nThe new list c is: ");
                        for(i=0;i<sizeC;i++)
                        {
                            printf("%d\t",listC[i]);
                        }
                        break;
                    }
                default:
                    {
                        printf("\nYou have entered a wrong choice.");
                        loop++;
                    }
            }
        }
        printf("\n\n\tDo you want to use one more option\n\tIf yes enter 'y' or 'Y'.  if no then enter any key to exit : ");
        more=getch();
    }
}
/*End of the program*/
