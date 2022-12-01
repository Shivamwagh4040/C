// Accept number of rows and number of columns from user and display below pattern.

/*
    a   b   c   d   e
    1   2   3   4   5
    a   b   c   d   e
    1   2   3   4   5   
    a   b   c   d   e
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 1;
    char ch = 'a';

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t",ch);
                ch++;
            }
            else
            {
                printf("%d\t",iNo);
            }
            iNo++;
        }
        printf("\n");
        iNo = 1;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}