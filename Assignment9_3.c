// Write a program to find even factorial of given number.

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt = iCnt + 2)
    {
        if((iNo % iCnt == 0)) 
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}