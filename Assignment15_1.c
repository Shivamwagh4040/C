// Accept N numbers from user and return frequency of even numbers.

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int i = 0;
    int iEven = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iEven++;
        }        
    }
    return iEven;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

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

    iRet = CountEven(ptr, iSize);

    printf("Result is : %d\n",iRet);

    free(ptr);

    return 0;
}