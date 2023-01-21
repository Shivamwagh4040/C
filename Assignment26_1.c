// Write a program which accept string from user and convert it into lower case
// Input : "Marvellous Multi OS"
// Output : marvellous multi os

#include<stdio.h>

void strlwrx(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if((str[i] >= 'A') && (str[i] <= 'Z'))
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is : %s\n",arr);

    return 0;
}