// Write a program which accept string from user and check whether it contains vowels in it or not.
// Input : "MarvellouS"
// Output : TRUE.

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
        {
            return TRUE;
        }
        str++;
        i++;
    }
    return FALSE;
}

int main()
{
    char Arr[20];
    BOOL bRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("Contains vowel\n");
    }
    else
    {
        printf("There is no vowel\n");
    }

    return 0;
}