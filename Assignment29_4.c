// Write a program which returns second maximum element from singly linear linked list.
// Function prototype :
// int SecMaximum(PNODE Head);
// Input Linked List : |110|->|230|->|320|->|240|
// Output : 240.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

int SecMaximum(PNODE Head)
{
    int iMax = 0;
    PNODE temp = Head;
    int iSmax = 0;
   
    while(Head != NULL)
    {
        if(iMax < (Head -> data))
        {
            iMax = Head -> data;
        }
        Head = Head -> next;
    }
    
    while(temp != NULL)
    {
        if((temp -> data) == iMax)
        {}
        else if(iSmax < (temp -> data))
        {
            iSmax = temp -> data;
        }
        temp = temp -> next;
    }
    return iSmax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    iRet = SecMaximum(First); 

    printf("Second Maximum element from linked list is : %d\n",iRet);

    return 0;
}