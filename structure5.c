//use of dot operator

#include<stdio.h>

struct coord
{
    int x,y;
};

int main()
{
    struct coord pt1={4,5};
    const struct coord pt2={2,3};
    int tx,ty;

    printf("enter values of translation vector:\n");
    scanf("%d%d",&tx,&ty);
    printf("after translation, coordinates are:\n");
    printf("pt1(%d,%d)\n", pt2.x+tx, pt1.y+ty);
    printf("pt2(%d,%d)\n", pt2.x+tx, pt2.y+ty);

    return 0;
}