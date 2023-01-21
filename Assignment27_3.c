// Write a program which accept string from user and accept one character. Return index of first occurence of that character.
// Input : "Marvellous Multi OS"
            // M
// Output : 0

#include<stdio.h>

int FirstOccur(char *str, char Ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == Ch))
        {
            break;
        }
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Please Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character that you want to check its occurence : \n");
    scanf("%c",&cValue);

    iRet = FirstOccur(Arr,cValue);

    printf("First occurence of %c characters is : %d\n",cValue,iRet);

    return 0;
}
            