// Write a program which accept total marks & obtained marks from user and calculate percentage.

#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    int iCnt = 0;
    int iPercent = 0;

    if(iCnt = iNo1, iNo2)
    {
        iPercent = iNo2 / iNo1 * 100;
    }
    return iPercent;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks : \n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Overall percentage is : ",fRet);

    return 0;
}