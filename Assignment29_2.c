// Write a program which displays all elements which are prime from singly linear linked list.
// Function prototype :
// int DisplayPrime(PNODE Head);
// Input Linked List : |11|->|20|->|17|->|41|->|22|->|89|
// Output : 11  17  41  89.

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

int DisplayPrime(PNODE Head)
{
    while(Head != NULL)
    {
        int i = 0;
        int iCnt = 0;
        int iSum = 0;
        for(i = 2; i < (Head -> data); i++)
        {
            if((Head -> data) % i == 0)
            {
                iCnt++;
            }
        }
        if(iCnt == 0)
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
    InsertFirst(&First,22);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    DisplayPrime(First); 

    return 0;
}