// Write a program which displays all elements which are perfect from singly linear linked list.
// Function prototype :
// int DisplayPerfect(PNODE Head);
// Input Linked List : |11|->|28|->|17|->|41|->|6|->|89|
// Output : 6   28.

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

int DisplayPerfect(PNODE Head)
{
    while(Head != NULL)
    {
        int i = 0;
        int iSum = 0;
        for(i = 1; i < (Head -> data); i++)
        {
            if((Head -> data) % i == 0)
            {
                iSum = iSum + i;
            }
        }
        if(iSum == (Head -> data))
        {
            printf("%d\t",Head -> data);
        }
        Head = Head -> next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    DisplayPerfect(First); 

    return 0;
}