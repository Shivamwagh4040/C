// Accept N numbers from user and accept one another number as NO, return frequency of NO from it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int i = 0;
    int iFreq = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo) 
        {
            iFreq++;
        } 
    }
    return iFreq;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0; 
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Enter the number : ");
    scanf("%d",&iValue);

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

    iRet = Frequency(ptr, iSize, iValue);

    printf("Result is : %d",iRet);

    free(ptr);

    return 0;
}