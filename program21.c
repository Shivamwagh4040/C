// Demonstration of iteration usinf for loop

#include<stdio.h>

void Display(int iValue)
{
    register int iCnt = 0;

    for(iCnt=1;iCnt<=iValue;iCnt++)
    {
        printf("Marvellous : %d\n",iCnt);
    }
}

int main() 
{
    int iNo = 0;

    printf("Enter the number of iterations : ");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}