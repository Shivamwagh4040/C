#include<stdio.h>

int X = 10
void demo()
{
  int B = 30;
  printf("Value of A from Demo : %d\n",B);
  printf("Value  of X from demo : %d\n",X);
}

int main()
{
  int A = 20;
  printf("Value of A from Main : %d\n",A);
  printf("Value of X from main : %d\n,X");
  Demo();
  return0;
}