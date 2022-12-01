// Program to print 5 to 1 numbers on screen.

#include<stdio.h>

void Display()
{
    register int i = 0;
    for(i = 5; i >= 1; i-=2)
    {
        printf("%d\n",i);
        i++;
    }
}

int main()
{
    Display();

    return 0;
}