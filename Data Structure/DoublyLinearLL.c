////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Name : Doubly Linear LinkedList
//  Description : Impementing Doubly Linear LinkedList with operations like Insertion, Deletion and Traversal
//  Input : Integer
//  Output : Integer
//  Author : Omkar Mahadev Bhargude
//  Date : 28/06/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    printf(" NULL <=> ");
    while(first != NULL)
    {
        printf("| %d | <=> ",first->data);
        first = first->next;
    }

    printf(" NULL \n");
}

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

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        newn->next->prev = newn;
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
    newn->prev = NULL;

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

        newn->prev = temp;
        temp->next = newn;

    }

}

void InsertAtPos(PPNODE first, int no, int pos)
{
    int iCount = 0, iCnt = 0;

    iCount = Count(*first);
    PNODE temp = NULL;
    PNODE newn = NULL;

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
        newn->prev = NULL;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }

}

void DeleteFirst(PPNODE first)
{
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
        *first = (*first) -> next;
        free((*first) -> prev);

        (*first)->prev = NULL;
    }

}

void DeleteLast(PPNODE first)
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

        while(temp -> next != NULL)
        {
            temp = temp->next;
        }

        temp->prev->next = NULL;

        free(temp);
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
        target->next->prev = temp;

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

    printf("----------------------------------------------------------------------------\n");
    printf("------------------------- DOUBLY LINEAR LINKEDLIST -------------------------\n");
    printf("----------------------------------------------------------------------------\n\n");

    while(1)
    {
        printf("-------------------------------------------------------------------------\n");
        printf("-------------------------- Select the Option ----------------------------\n");
        printf("-------------------------------------------------------------------------\n");
        printf("1 : Insert new node at first position\n");
        printf("2 : Insert new node at last position\n");
        printf("3 : Insert new node at given position\n");
        printf("4 : Delete new node at first position\n");
        printf("5 : Delete new node at last position\n");
        printf("6 : Delete new node at given position\n");
        printf("7 : Display all element from LinkedList\n");
        printf("8 : Count number of elements from LinkedList\n");
        printf("0 : Terminate LinkedList\n");
        printf("------------------------------------------------------------------------\n");

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
                    printf("Deleting first element from LinkedList\n");
                    DeleteFirst(&head);
                    break;

            case 5:
                    printf("Deleting last element from LinkedList\n");
                    DeleteLast(&head);
                    break;

            case 6:
                    printf("Deleting element from given position of LinkedList\n");
                    printf("Enter the position at which you want delete the new node : \n");
                    scanf("%d",&iPos);

                    DeleteAtPos(&head,iPos);
                    break;

            case 7: 
                   printf("Displaying all the elements from LinkedList\n");
                   Display(head);
                   break;

            case 8:
                    iRet = Count(head);
                    printf("Number of elements in LinkedList are : %d",iRet);
                    break;
            case 0:
                   printf("------------------- THANKS FOR USING OUR APPLICATION ---------------\n");
                   return 0;
            
            default:
                   printf("Invalid Choice\n");
                   break;
                   printf("--------------------------------------------------------------------\n");
                   
        }            
    }


    return 0;
}