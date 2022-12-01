// Accept N numbers from user and return product of all odd elements.

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int i = 0;
    int iMult = 0;

    for(i = 0; i < iLength; i++)
    {
       if(Arr[i] % 2 != 0)
       {
           iMult = iMult * Arr[i];
       }
    }   
    return iMult;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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

    iRet = Product(p, iSize);

    printf("Product is %d",iRet);

    free(p);

    return 0;
}