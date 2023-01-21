// Write a program which display addition of digits of elements from singly linear linked list.
// Function prototype :
// int SumDigit(PNODE Head);
// Input Linked List : |110|->|230|->|20|->|240|->|640|
// Output : 2   5   2   6   10.

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

void SumDigits(PNODE Head)
{  
    while(Head != NULL)
    {
        int iDigit = 0;
        int iSum = 0;
        while((Head -> data) != 0)
        {
            iDigit = (Head -> data) % 10;
            iSum = iSum + iDigit;
            Head -> data = (Head -> data) / 10;
        }
        printf("%d\t",iSum);
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
    
    SumDigits(First); 

    return 0;
}