// Write a program which returns addition of all even elements from singly linear linked list.
// Function prototype :
// int AddEven(PNODE Head);
// Input Linked List : |11|->|20|->|32|->|41|
// Output : 52.

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

int AddEven(PNODE Head)
{
    while(Head != NULL)
    {
        int iSum = 0;
        
        while(Head != NULL)
        {
            if((Head -> data) % 2 == 0)
            {
                iSum = iSum + (Head -> data);
            }
            Head = Head -> next;
        }
        return iSum;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    iRet = AddEven(First); 

    printf("Addition of even elements of linked list is : %d\n",iRet);

    return 0;
}