// Write a program which accept number from user and print that number of "$" & "*" on screen.

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}