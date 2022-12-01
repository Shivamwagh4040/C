#include<stdio.h>

struct demo
{
    int i;
    float f;
    char ch;
    double d;
};

int main()
{
    struct demo dobj;
    printf("size of the structure is : %d\n",sizeof(dobj));

    return 0;
}