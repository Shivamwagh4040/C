// Write a program which returns addition of all elements from singly linear linked list.
// Function should return position at which element is found.
// Function prototype :
// int Addition(PNODE Head);
// Input Linked List : |10|->|20|->|30|->|40|
// Output : 100.

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

int Addition(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        iSum = iSum + Head -> data;
        Head = Head -> next;
    }
    return iSum;
}

int main()
{
    PNODE First = NULL;

    int iRet = 0;

    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    iRet = Addition(First);
    printf("Addition is : %d\n",iRet);

    return 0;
}