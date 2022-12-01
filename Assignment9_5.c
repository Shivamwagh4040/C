// Write a program which returns difference between even factorial and odd factorial of given number.

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenmult = 1;
    int iOddmult = 1;
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenmult = iEvenmult * iCnt;
        }
        else
        {
            iOddmult = iOddmult * iCnt;
        }
    }
    return iEvenmult - iOddmult;
}


int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is %d",iRet);

    return 0;
}