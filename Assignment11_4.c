// Write a program which acccept range from user and return addition of all even numbers in between that range (Range should contain positive numbers only).

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Input\n");
        return 1;
    }

    int iCnt = 0;
    int iSum = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point : \n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("Addition is %d",iRet);

    return 0;
}
