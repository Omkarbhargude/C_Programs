////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Name : Singly Linear LinkedList
// Description : Impementing Singly linear LinkedList with operations like Insertion, Deletion and traversal
// Input : Integer
// Output : Integer
// Author : Omkar Mahadev Bhargude
// Date : 01/07/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

//Displays all the elements present in linkedlist
void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);

        first = first-> next;
    }

    printf("NULL\n");
}

//Gives count of number of elements present in linkedlist
int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;

        first = first->next;
    }

    return iCount;
}

// Inserts new node at the beginning of linked list
void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = no;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}

// Inserts new node at the end of linked list
void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = no;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp -> next != NULL)
        {
            temp = temp->next;
        }

        temp -> next = newn;
    }
}

// Deletes node at the beginning of linked list
void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first) -> next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        *first = (*first)->next;

        free(temp);
    }
}

// Delete node at the end of linked list
void DeleteLast(PPNODE first)
{
 
    PNODE temp = NULL;
    PNODE target = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first) -> next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        
        while(temp -> next -> next != NULL)
        {
            temp = temp->next;
        }

        target = temp->next;

        free(target); 

        temp->next = NULL;
    }
}


// Inserts new node at the given position in linked list at runtime 
void InsertAtPos(PPNODE first, int no, int pos)
{
    int iCount = 0, iCnt = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;

    iCount = Count(*first);

    if((pos < 1) || (pos > iCount+2))
    {
        printf("Invalid Position\n");
        return;
    }
    

    if(pos == 1)
    {
        InsertFirst(first,no);
    }
    else if(pos == iCount)
    {
        InsertLast(first,no);
    }
    else
    {
        temp = *first;

        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

// Deletes node at the given position in linked list at runtime
void DeleteAtPos(PPNODE first , int pos)
{
    int iCount = 0, iCnt = 0;

    iCount = Count(*first);

    PNODE temp = NULL;
    PNODE target = NULL;

    if((pos < 1) || (pos > iCount+2))
    {
        printf("Invalid Position\n");
        return;
    }
    

    if(pos == 1)
    {
        DeleteFirst(first);
    }
    else if(pos == iCount)
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp =  temp->next;
        }

        target =  temp->next;

        temp->next = target->next;

        free(target);
    }
    
}


int main()
{

    PNODE head = NULL;

    int iChoice = 0;
    int iValue = 0;
    int iPos = 0;
    int iRet = 0;

    printf("-------------------------------------------------------------------\n");
    printf("----------------------- SINGLY LINEAR LINKEDLIST ------------------\n");
    printf("-------------------------------------------------------------------\n\n");

    while(1)
    {
        printf("-------------------------------------------------------------------\n");
        printf("---------------------- Select the Option --------------------------\n");
        printf("-------------------------------------------------------------------\n");
        printf("1 : Insert new node at first Position\n");
        printf("2 : Insert new node at last Position\n");
        printf("3 : Insert new node at given Position\n");
        printf("4 : Delete new node at first Position\n");
        printf("5 : Delete new node at last Position\n");
        printf("6 : Delete new node at given Position\n");
        printf("7 : Display all elements of LinkedList\n");
        printf("8 : Count number of node from LinkedList\n");
        printf("0 : Terminate LinkedList\n");
        printf("------------------------------------------------------------------\n");

        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1:
                 printf("Enter the data that you want to insert : \n");
                 scanf("%d",&iValue);

                InsertFirst(&head,iValue);
                break;

            case 2:
                printf("Enter the data that you want to insert : \n");
                scanf("%d",&iValue);

                InsertLast(&head,iValue);
                break;

            case 3:
                printf("Enter the data that you want to insert : \n");
                scanf("%d",&iValue);

                printf("Enter the position at which you want to insert the node : \n");
                scanf("%d",&iPos);

                InsertAtPos(&head,iValue,iPos);
                break;

            case 4:
                printf("Deleting first element from LinkedList... \n");
                DeleteFirst(&head);
                break;
            
            case 5:
                printf("Deleting Last element from LinkedList... \n");
                DeleteLast(&head);
                break;

            case 6:
                printf("Enter the position at which you want delete the new node\n");
                scanf("%d",&iPos);

                DeleteAtPos(&head,iPos);

                printf("Deleting the element from given position in LinkedList...\n");
                break;

            case 7:
                printf("Elements from LinkedList are : \n");
                Display(head);
                break;

            case 8:
                iRet = Count(head);
                printf("Number of elements in LinkedList are : %d\n",iRet);
                break;

            case 0:
                printf("------------ THANKS FOR USING OUR APPLICATION -----------\n");
                return 0;

            default:
                printf("Invalid Choice\n");
                break;
                printf("------------------------------------------------------------------\n");
        }
    }
   return 0;
}