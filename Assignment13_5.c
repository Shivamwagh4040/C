//Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;

    while(iNo!= 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEven = iEven + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }
        iNo = iNo/10;
    }
    return iEven - iOdd;
}

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter any number : \n");
    scanf("%d",&iValue);

    bRet = CountDiff(iValue); 

    printf("Difference is : %d\n",bRet);

    return 0;
}

