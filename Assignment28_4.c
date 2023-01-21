// Write a program which returns largest element from singly linear linked list.
// Function prototype :
// int Maximum(PNODE Head);
// Input Linked List : |110|->|230|->|320|->|240|
// Output : 320.

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

int Maximum(PNODE Head)
{
    int itemp = 0;

    while(Head != NULL)
    {
        if(itemp < (Head -> data))
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

    InsertFirst(&First,240);
    InsertFirst(&First,320);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    iRet = Maximum(First);
    printf("Maximum no. is : %d\n",iRet);

    return 0;
}