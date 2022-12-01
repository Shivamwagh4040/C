//Accept "N" Numbers and Perforn the summation of Even Elements and odd Elements.
#include<stdio.h>
#include<stdlib.h>

int DisplayEvenOddSum(int Arr[], int iSize)
{
    int iCnt = 0, iEvenSum = 0, iOddSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
        
    }
    printf("Summation of even elements are : %d\n",iEvenSum);
    printf("Summation of odd elements are : %d\n",iOddSum);
    
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = DisplayEvenOddSum(ptr, iLength);

    free(ptr);

    return 0;
}