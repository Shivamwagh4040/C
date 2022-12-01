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

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo =iNo / 10;
    }
    return (iRev == iTemp);
    
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