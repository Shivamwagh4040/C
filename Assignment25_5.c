// Write a program which accept string from user and count number of white spaces.
// Input : "MarvellouS"
// Output : 0.

#include<stdio.h>

int CountWhite(char *str)
{
    int j = 0;
    int iCnt = 0;

    while(str[j] != '\0')
    {
        iCnt++;
        j++;
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

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);

    printf("%d", iRet);

    return 0;
}