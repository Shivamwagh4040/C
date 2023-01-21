// Write a program which accept string from user and count number of capital characters.
// Input : "Marvellous Multi OS"
// Output : 4

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
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

    printf("Enter the character : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("Number of capital letters are : %d\n",iRet);

    return 0;
}