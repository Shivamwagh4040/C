//Accept amount in US dollar and return its corresponding value in Indian Currency.consider 1$ as 70 rupees.

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iAns = 0;

    iAns = iNo * 70;

    return iAns; 

}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}