// Write a program which accept three numbers and print its multiplication.

#include<stdio.h>

int Multiply(int s1, int s2, int s3)
{
    int iCnt = 0;
    int iMult = 0;

    if(iCnt = s1,s2,s3)
    {
        iMult = s1 * s2 * s3;
    }
    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers : \n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication of three numbers is %d",iRet);

    return 0;
}