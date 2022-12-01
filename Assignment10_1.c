// Write a program which accept radius of circle from user and calculate its area.

#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    float Area = 0;
    
    Area = PI * fRadius * fRadius;
    
    return Area;
}
int main()
{
    float fValue = 0;
    double dRet = 0.0;

    printf("Enter number : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf",dRet);

    return 0;
}