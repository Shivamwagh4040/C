// Accept number of rows and number of columns from user and display below pattern.

/*
    1   2   3   4   
    2   3   4   5
    3   4   5   6
    4   5   6   7   
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 1;

    for(i = 2; i <= iRow + 1; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",iNo);
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