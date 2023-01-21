#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// TOGGLE 5th 6th 7th bit
// 0000 0000 0000 0000 0000 0001 1100 0000
// 0000 0000 0000 0000 0000 0000 0111 1000 
//   0   0     0    0    0    0   7     0
// 0X00000070

UINT ToggleBit(UINT No)
{
    UINT iMask = 0X00000070;
    UINT iAns = 0;

    iAns = No ^ iMask;

    return iAns;
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = ToggleBit(Value);

    printf("Updated number is : %d\n",iRet);

    return 0;
}