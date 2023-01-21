// Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
// Input : A
// Output : Decimal         65
// Octal           0101
// Hexadecimal     0X41

#include<stdio.h>

void Display(char ch)
{
    printf("Symbol : %c",ch);
    printf("Decimal : %d",ch);
    printf("Octal : %o",ch);
    printf("Hexadecimal : %x",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}