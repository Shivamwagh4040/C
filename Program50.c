
#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    int iSum = 0;

    if(iNo == 0)        // Filter
    {
        return 1;
    }

    if(iNo < 0)         // Updator
    {
        iNo = -iNo;
    }

    while(iNo > 0)      // Logic
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        iCnt++;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}