// Demonstration of iteration using for loop

#include<stdio.h>

void Display()
{
    register int iCnt = 0;

    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("Marvellous : %d\n",iCnt);
    }
}

int main() 
{
    Display();

    return 0;
}