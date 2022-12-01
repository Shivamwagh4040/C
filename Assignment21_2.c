// Accept number of rows and number of columns from user and display below pattern.

/*
    2   4   6   8   10
    1   3   5   7   9
    2   4   6   8   10
    1   3   5   7   9
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 1;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol * 2; j++)
        {
            if(i % 2 == 0)
            {
                if(iNo % 2 == 0)
                {
                    printf("%d\t",iNo);
                }
                else
                {
                    if(iNo % 2 != 0)
                    {
                        printf("%d\t",iNo);
                    }
                }
                iNo++;
            }
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