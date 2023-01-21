// Write a program which accept string from user and count number of white spaces.
// Input : "MarvellouS"
// Output : 0.

#include<stdio.h>

int CountWhite(char *str)
{
    int i = 0;
    int iCnt = 0;

    while(str[i] != '\0')
    {
        if((str[i] == ' '))
        {
            iCnt++;
        }
        i++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}