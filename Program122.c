#include<stdio.h>

int main()
{

    int i = 0;

    printf("_______________________________________________\n");
    printf("ASCII table\n");
    printf("________________________________________________\n");

    printf("Character\t Decimal\t hex\t Octal");

    for(i = 0; i <= 127; i++)
    {
        printf("%c\t %d\t %x\t %o\n",i,i,i,i);
    }

    printf("\n______________________________________________\n");

    return 0;
}