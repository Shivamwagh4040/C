// Accept character from user. If it is capital then display all the characters from the input characters till Z. if input character is small then print all the characters in reverse order till a. In other cases return directly.
// Input : Q
// Output : Q   R   S   T   U   V   W   X   Y   Z
// Input : m
// Output : m   l   k   j   i   h   g   f   e   d   c   b   a
// Input : 8
// Output :

#include<stdio.h>

void Display(char ch)
{
    if(ch >='A' && ch <= 'Z')
    {
        for(int iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t",iCnt);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(int iCnt = ch; iCnt >= 'a'; iCnt --)
        {
            printf("%c\t",iCnt);
        }
    }
    else
    {
        return;
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}