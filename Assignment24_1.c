// Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t",iCnt);
        printf("%d\t",iCnt);
        printf("%x\t",iCnt);
        printf("%o\t",iCnt);
        printf("\n");
    }
}
int main()
{
    DisplayASCII();

    return 0;
}