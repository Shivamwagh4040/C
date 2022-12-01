// Accept N numbers from user and Display all such numbers which contains 3 digits in it.

#include<stdio.h>
#include<stdlib.h>

int Digits(int Arr[], int iLength)
{
    int i = 0;
    int iSmall = Arr[0];
    int iLarge = 0;

    for(i = 0; i < iLength; i++)
    {
       if((Arr[i] > 99) && (Arr[i] < 1000))
       {
            printf("%d\t",Arr[i]);
       }
    }   
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Digits(p, iSize);

    free(p);

    return 0;
}