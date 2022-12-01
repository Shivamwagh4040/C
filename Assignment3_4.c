// Accept one character from user and convert case of that character.

#include<stdio.h>

void DisplayConvert(char cChar)
{
    if((cChar >= 'A') && (cChar <= 'Z'))
    {
        printf("%c",cChar + 32);
    }

    else if((cChar >= 'a') && (cChar <= 'z'))
    {
        printf("%c",cChar - 32);
    }

    else
    {
        printf("Enter Valid Input");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}