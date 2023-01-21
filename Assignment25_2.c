// Write a program which accept string from user and count number of Small characters.
// Input : "Marvellous"
// Output : 9

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;
    int i = 0;

   while(str[i] != '\0')
   {
        if(str[i] >= 'a' && str[i] <= 'z')
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

    iRet = CountSmall(Arr);

    printf("Number of capital letters are : %d\n",iRet);

    return 0;
}