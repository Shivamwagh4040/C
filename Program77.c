
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckOccurence(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0, iValue = 0;
    
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to find out the index of first occurence : \n");
    scanf("%d",&iValue);

    iRet = CheckOccurence(ptr, iLength, iValue);
    if(iRet == -1)
    {
        printf("There is no %d in the array\n",iValue);
        
    }
    else
    {
        printf("%d is occured in the array at index %d\n",iValue);
    }

    free(ptr);

    return 0;
}