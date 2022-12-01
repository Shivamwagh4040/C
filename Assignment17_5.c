// Accept N numbers from user and Display summation of digits of each number.

#include<stdio.h>
#include<stdlib.h>

int DigitSum(int Arr[], int iLength)
{
    int i = 0;
    int iDigit = 0;
    int iSum = 0;

    for(i = 0; i < iLength; i++)
    {
        while(Arr[i] != 0)
        {
            iDigit = Arr[i] % 10;
            iSum = iSum + iDigit;
            Arr[i] = Arr[i] / 10;
        }
        printf("%d\t",iSum);
        iSum = 0;
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

    DigitSum(p, iSize);

    free(p);

    return 0;
}