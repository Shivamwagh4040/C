// Write a program which accept string from user and reverse that string in place.
// Input : "abcd"
// Output : "dcba"

#include<stdio.h>

int strRevX(char str[])
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        iCnt++;   
    }
    int i = iCnt;

    while(i != -1)
    {
        printf("%c",str[i]);
        i--;
    }
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please Enter String : \n");
    scanf("%[^'\n']s",Arr);

    strRevX(Arr);

    return 0;
}
            