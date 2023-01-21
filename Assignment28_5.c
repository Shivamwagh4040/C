// Write a program which returns smallest element from singly linear linked list.
// Function prototype :
// int Minimum(PNODE Head);
// Input Linked List : |110|->|230|->|20|->|240|->|640|
// Output : 20.

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

int Minimum(PNODE Head)
{
    int itemp = Head -> data;

    while(Head != NULL)
    {
        if(itemp > (Head -> data))
        {
            itemp = Head -> data;
        }
        Head = Head -> next;
    }
    return itemp;
}

int main()
{
    PNODE First = NULL;

    int iRet = 0;

    InsertFirst(&First,640);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    iRet = Minimum(First);
    printf("Minimum no. is : %d\n",iRet);

    return 0;
}