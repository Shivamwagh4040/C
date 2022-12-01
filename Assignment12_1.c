//Write a program which accept number from user and display its digitd in reverse order.

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo/10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter any number : \n");
    scanf("%d",&iValue);

    printf("Digits in Reverse order : \n");

    DisplayDigit(iValue);

    return 0;
}
