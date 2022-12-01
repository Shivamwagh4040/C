// Write a program to find odd factorial of given number.

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt >= (iNo/2); iCnt = iCnt - 2)
    {
        if((iNo % iCnt != 0)) 
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}