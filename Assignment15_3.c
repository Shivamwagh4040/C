// Accept N numbers from user and check whether that numbers contains 11 in it or not.

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int i = 0;
    int iEven = 0;
    int iOdd = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == 11) 
        {
            return 1;
        } 
    }
    return 0;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }  

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Check(ptr, iSize);

    if(bRet == TRUE)
    {
        printf("11 is present");       
    }
    else
    {
        printf("11 is absent");
    }

    free(ptr);

    return 0;
}