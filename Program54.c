
#include<stdio.h>

void DisplayEvenOddDigits(int iNo)
{
    int iEvenCnt = 0;
    int iOddCnt = 0;
    int iDigit = 0;

    if(iNo == 0)
    {
            
        printf("Count of even digits are :1");
        printf("Count of even digits are : 0");
        return;
    }

    while(iNo != 0)      // Logic
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEvenCnt++;
        }
           
        else
        {
            iOddCnt++;
        }
        iNo = iNo / 10;
    }

    printf("Count of even digits is : %d\n",iEvenCnt);
    printf("Count of odd digits is : %d\n",iOddCnt);

}

int main()
{
    int iValue = 0;
    
    printf("Please enter number : \n");
    scanf("%d",&iValue);

    DisplayEvenOddDigits(iValue);

    return 0;
}