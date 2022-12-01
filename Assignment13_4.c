//Write a program which accept number from user and return multiplication of all.

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    while(iNo!= 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iDigit = 1;
        }
        iMult = iMult * iDigit;
        iNo = iNo/10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter any number : \n");
    scanf("%d",&iValue);

    bRet = MultDigits(iValue); 

    printf("Multiplication is : %d\n",bRet);

    return 0;
}

