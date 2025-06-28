////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Name : Singly Linear LinkedList
// Description : Implementing a Singly Linear Linked List with operations like insertion, deletion and traversal.
// Input  : Integer
// Ouput  : Integer
// Author : Omkar Mahadev Bhargude
// Date   : 28/06/2025 
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }

    printf(" NULL\n");

}

int Count(PNODE first)
{
    int iCount  = 0;

    while(first != NULL)
    {
        iCount++;

        first = first->next;
    }

    return iCount;

}

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

} 

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
    else if(pos == iCount+1)
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

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
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

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }

}

void DeleteAtPos(PPNODE first, int pos)
{
    int iCount = 0, iCnt = 0;
    PNODE temp = NULL;
    PNODE target = NULL;

    iCount = Count(*first);

    if((pos < 1) || (pos > iCount))
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
            temp = temp->next;
        }

        target = temp->next;

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

        if(iChoice == 1)
        {
            printf("Enter the data that you want to insert : \n");
            scanf("%d",&iValue);

            InsertFirst(&head,iValue);
        }
        else if(iChoice == 2)
        {
            printf("Enter the data that you want to insert : \n");
            scanf("%d",&iValue);

            InsertLast(&head,iValue);
        }
        else if(iChoice == 3)
        {
            printf("Enter the data that you want to insert : \n");
            scanf("%d",&iValue);

            printf("Enter the position at which you want to insert the node : \n");
            scanf("%d",&iPos);

            InsertAtPos(&head,iValue,iPos);
        }
        else if(iChoice == 4)
        {
            printf("Deleting first element from LinkedList... \n");
            DeleteFirst(&head);
        }
        else if(iChoice == 5)
        {
            printf("Deleting Last element from LinkedList... \n");
            DeleteLast(&head);
        }
        else if(iChoice == 6)
        {
            printf("Deleting the element from given position in LinkedList...\n");

            printf("Enter the position at which you want delete the new node\n");
            scanf("%d",&iPos);

            DeleteAtPos(&head,iPos);
        }
        else if(iChoice == 7)
        {
            printf("Elements from LinkedList are : \n");

            Display(head);
        }
        else if(iChoice == 8)
        {
            iRet = Count(head);
            printf("Number of elements in LinkedList are : %d\n",iRet);
        }
        else if(iChoice == 0)
        {
            printf("------------ THANKS FOR USING OUR APPLICATION -----------\n");
            break;
        }
        else
        {
            printf("Invalid Choice\n");
        }
        printf("------------------------------------------------------------------\n");
    }

   return 0;

}