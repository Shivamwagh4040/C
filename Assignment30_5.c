// Write a program which display largest digits of all elements singly linear linked list.
// Function prototype :
// void DisplayLarge(PNODE Head);
// Input Linked List : |11|->|250|->|532|->|419|.
// Output : 1   5   5   9.

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

void DisplayLarge(PNODE Head)
{  
    while(Head != NULL)
    {
        int iDigit = 0;
        int itemp = 0;

        while((Head -> data) != 0)
        {
            iDigit = (Head -> data) % 10;
            if(itemp < iDigit)
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

    InsertFirst(&First,419);
    InsertFirst(&First,532);
    InsertFirst(&First,250);
    InsertFirst(&First,11);
    
    DisplayLarge(First); 

    return 0;
}