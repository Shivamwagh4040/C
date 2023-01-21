// Write a program which accept string from user and accept one character. Return index of last occurence of that character.
// Input : "Marvellous Multi OS"
            // M
// Output : 0

#include<stdio.h>

int LastOccur(char *str, char Ch)
{
    int iCnt = 0;
    int Tempt = 0;

    while(str[iCnt] != '\0')
    {
        if((str[iCnt] == Ch))
        {
            Tempt = iCnt;
        }
        iCnt++;
        
    }
    return Tempt;
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

    iRet = LastOccur(Arr,cValue);

    printf("Last Occurence of %c characters is : %d\n",cValue,iRet);

    return 0;
}
            