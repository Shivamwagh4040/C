// Accept N numbers from user and accept range, Display all elements from that range.

#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
       if((Arr[i] >= iStart) && (Arr[i] <= iEnd))
       {
            printf("No. in range are :%d\n",Arr[i]);
       }
    }   
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Enter the starting point : ");
    scanf("%d",&iValue1);

    printf("Enter the ending point : ");
    scanf("%d",&iValue2);

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

    iRet = Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}