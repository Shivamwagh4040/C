// Write a program which Reverse each element of singly linear linked list.
// Function prototype :
// void Reverse(PNODE Head);
// Input Linked List : |11|->|28|->|17|->|41|->|6|->|89|.
// Output : |11|->|28|->|17|->|41|->|6|->|89|.

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

void Reverse(PNODE Head)
{  
    while(Head != NULL)
    {
        int iRev = 0;
        int iDigit = 0;
        while((Head -> data) != 0)
        {
            iDigit = (Head -> data) % 10;
            iRev = iRev * 10 + iDigit;
            Head -> data = (Head -> data) / 10;
        }
        printf("|%d|->",iRev);
        Head = Head -> next;
    }
    printf("NULL\n");
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
    
    Reverse(First); 

    return 0;
}