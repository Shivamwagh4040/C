// Write a program which search last occurence of particular element from singly linear linked list.
// Function should return position at which element is found.
// Function prototype :
// int SearchFirstOcc(PNODE Head, int no);
// Input Linked List : |10|->|20|->|30|->|40|->|50|->|30|->|70|
// Input Element : 30.
// Output : 3.

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

int SearchFirstOcc(PNODE Head, int No)
{
    int iCnt = 0;

    while(Head -> data != No)
    {
        iCnt = iCnt + 1;
        Head = Head -> next;
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;

    int iRet = 0;

    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    iRet = SearchFirstOcc(First,30);
    printf("First Occurence of 30 is : %d\n",iRet);

    return 0;
}