//assignment of an array to another array

#include<stdio.h>
int main()
{
    int a[3],b[3]={10,20,30};
    printf("assigning an array to an array:\n");
    a=b;
    printf("elements of array a are;\n");
    printf("%d %d %d",a[0],a[1],a[2]);
}