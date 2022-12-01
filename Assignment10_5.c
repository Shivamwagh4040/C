// Write a program which accept area in square feet and convert it into square meter.

#include<stdio.h>

double SquareMeter(int iNo)
{
    int squaremetre;

    squaremetre = iNo * 0.092903;

    return squaremetre;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Square feet to square meter conversion is : %lf",dRet);

    return 0;
}