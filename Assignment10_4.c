// Write a program which accept temperature in fahrenheit and convert it into celcius.

#include<stdio.h>

double FhtoCs(float fTemp)
{
    float celcius = 0.0;

    celcius = (fTemp - 32)*5/9;

    return celcius;
}
int main()
{
    float fValue = 0, iRet = 0;

    printf("Enter temperature in Fahrenhiet : ");
    scanf("%f",&fValue);

    iRet = FhtoCs(fValue);

    printf("Fahrenheit to celcius conversion is : %f",iRet);

    return 0;
}