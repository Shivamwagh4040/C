// Accept N numbers from user and return difference between summation of even element and summation of odd elements.

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int i = 0;
    int EvenSum = 0;
    int OddSum = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            EvenSum = EvenSum + Arr[i];
        }
        else
        {
            OddSum = OddSum + Arr[i];
        }
    }
    return EvenSum - OddSum;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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

    iRet = Difference(ptr, iSize);

    printf("Result is %d",iRet);

    free(ptr);

    return 0;
}