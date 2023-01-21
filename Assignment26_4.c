// Write a program which accept string from user and display on digits from that string.
// Input : "marve89llous121"
// Output : 89121.

#include<stdio.h>

void DisplayDigit(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if((str[i] >= '0') && (str[i] <= '9'))
        {
            printf("%c",str[i]);
        }
        i++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    printf("Modified string is : %s\n",arr);

    return 0;
}