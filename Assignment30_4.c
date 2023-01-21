// Write a program which display smallest digits of all elements singly linear linked list.
// Function prototype :
// void DisplaySmall(PNODE Head);
// Input Linked List : |11|->|250|->|532|->|415|.
// Output : 1   0   2   1.

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

void DisplaySmall(PNODE Head)
{  
    while(Head != NULL)
    {
        int iDigit = 0;
        int itemp = Head -> data;

        while((Head -> data) != 0)
        {
            iDigit = (Head -> data) % 10;
            if(itemp > iDigit)
            {
                itemp = iDigit;
            }
            Head -> data = (Head -> data) / 10;
        }
        printf("%d\t",itemp);
        Head = Head -> next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,415);
    InsertFirst(&First,532);
    InsertFirst(&First,250);
    InsertFirst(&First,11);
    
    DisplaySmall(First); 

    return 0;
}