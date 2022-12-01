// Write a program which accept distance in kilometer and convert it into meter.

#include<stdio.h>

double KMtoMeter(int iNo)
{
    int Meter = 0;

    Meter = iNo * 1000;

    return Meter;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter kms : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("KM to Meter conversion is : %d",iRet);

    return 0;
}