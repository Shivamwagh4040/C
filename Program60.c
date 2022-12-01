#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit = 0, iRev = 0;
    int iTemp = iNo;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(; iNo != 0;)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
    }
    
    if(iRev == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("%d is Pallindrome bumber\n",iValue);
    }
    else
    {
        printf("%d is not a Pallindrome number\n",iValue);
    }

    return 0;
}