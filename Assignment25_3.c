// Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
// Input : "MarvellouS"
// Output : 6   (8-2)

#include<stdio.h>

int Frequency(char *str)
{
    int iCap = 0;
    int i = 0;
    int iSmall = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            iCap++;
        }
        else
        {
            iSmall++;
        }
        str++;
    }
    return iCap - iSmall;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the character : ");
    scanf("%[^'\n']s",Arr);

    iRet = Frequency(Arr);

    printf("Frequency is : %d\n",iRet);

    return 0;
}