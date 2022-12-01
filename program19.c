// Demonstration of iteration usinf for loop

#include<stdio.h>

void Display(int iValue)
{
    register int iCnt = 0;

    iCnt = 1;
    while(iCnt <= iValue)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
    }
}

int main() 
{
    int iNo = 0;

    printf("Enter the number of iterations : ");
    scanf("%d", &iNo);
    
    Display(iNo);

    return 0;
}