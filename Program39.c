#include<stdio.h>

int DisplayTable(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMult = iCnt * iNo;
        printf("%d\n",iMult);
    }
    return iMult;
}
int main()
{
    int iValue = 0;
    
    printf("Enter the value : \n");
    scanf("%d",&iValue);

    printf("Table of %d is : \n",iValue);

    DisplayTable(iValue);
    
    return 0;
}