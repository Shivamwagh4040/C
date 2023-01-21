#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// 7 8 9 bit
// 0000 0000 0000 0000 0000 0001 1100 0000
// 1111 1111 1111 1111 1111 1111 1111 0111 
//   F   F     F    F    F    F   F     7
// 0XFFFFFFF7

UINT OffBit(UINT No)
{
    UINT iMask = 0XFFFFFFF7;
    UINT iAns = 0;

    iAns = No & iMask;

    return iAns;
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = OffBit(Value);

    printf("Updated number is : %d\n",iRet);

    return 0;
}