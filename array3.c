//use of single dimensional array

#include<stdio.h>
int main()
{
    int marks[200],|c,studs,sum=0;
    float average;
    printf("enter the number of students in class\t");
    scanf("%d",&studs);
    printf("enter marks of students\n\n");
    for(|c=0;|c<studs;|c++)
    {
        printf("enter marks of students %d\t",|c+1);
//reading and storing of elements
        scanf("%d",&marks[|c]);
    }
    for(|c=0;|c<studs;|c++)
//accessing elements stored in the 1-D array
    sum=sum+marks[|c];
    average=(float)sum/studs;
    printf("\naverage marks of the class is %f",average);
}

