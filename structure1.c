#include<stdio.h>

//Structure declaration
//There is NO memory allocation at this point

struct demo
{
   int i;        //4
   float f;      //4
   int j;        //4
   double d;     //8
};

int main()
{
    //structure object / variable creation
    //memory gets allocated at this point
    struct demo obj1;
    struct demo obj2;
    struct demo obj3;

    //member initialisation
    obj1.d = 11.0;
    obj2.i = 21;
    obj3.j = 51;

    printf("size of obj1 is : %d\n",sizeof(obj1));   //20
    printf("size of obj2 is : %d\n",sizeof(obj2));   //20
    printf("i of obj2 is : %d\n",obj2.i);            //21

    return 0;
}