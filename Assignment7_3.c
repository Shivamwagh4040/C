// Write a program which accept number from user and print its numbers line.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = -4; iCnt <= 4; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
