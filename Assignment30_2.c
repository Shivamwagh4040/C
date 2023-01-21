// Write a program which display pallindrome elements of singly linear linked list.
// Function prototype :
// void DisplayPallindrome(PNODE Head);
// Input Linked List : |11|->|28|->|17|->|414|->|6|->|89|.
// Output : 11  6   414.

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
        int itemp = Head -> data;

        while((Head -> data) != 0)
        {
            iDigit = (Head -> data) % 10;
            iRev = iRev * 10 + iDigit;
            Head -> data = (Head -> data) / 10;
        }
        if(itemp == iRev)
        {
            printf("%d\t",iRev);
        }
        Head = Head -> next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,414);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);
    
    Reverse(First); 

    return 0;
}