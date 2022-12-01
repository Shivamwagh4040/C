#include<stdio.h>

void demo()
{
     int A = 10;
     A++;
     printf("value from demo is : %d\n",A);
}
void hello()
{
     int B = 10;
     B++;
     printf("value from hello is : %d\n",B);
}
int main()
{
     demo();
     demo();
     hello();
     hello();
     return 0;
}