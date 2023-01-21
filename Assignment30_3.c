// Write a program which display product of all digits of all elements of singly linear linked list.
// Function prototype :
// void DisplayProduct(PNODE Head);
// Input Linked List : |11|->|20|->|32|->|41|.
// Output : 1   2   6   4.

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

void DisplayProduct(PNODE Head)
{  
    while(Head != NULL)
    {
        int iMult = 1;
        int iDigit = 0;

        while((Head -> data) != 0)
        {
            iDigit = (Head -> data) % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
            iMult = iMult * iDigit;
            Head -> data = (Head -> data) / 10;
        }
        printf("%d\t",iMult);
        Head = Head -> next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);
    
    DisplayProduct(First); 

    return 0;
}