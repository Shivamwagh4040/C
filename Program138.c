#include<stdio.h>

int CountCh(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please enter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountCh(Arr);   // strlenX(100)

    printf("Number of Frequency of small letters is : %d\n",iRet);

    return 0;
}