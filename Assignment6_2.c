// Write a program which accept one number from user and check whether that number is greater than 100 or not

#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater( int iNo)
{
   int iCnt = 100;

   if(iCnt > iNo)
   {
        return TRUE;
   }
   else
   {
        return FALSE;
   }

}

int main()
{
    int iValue = 0;

    BOOL bRet = FALSE;

    printf("Please Enter Number : ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet < TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}
