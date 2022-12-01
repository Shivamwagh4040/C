// Accept N numbers from user and display all such elements which are even and divisible by 5.

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int i = 0;
    int iEven = 0;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 2 == 0) && (Arr[i] % 5 == 0))
        {
            printf("%d\t",Arr[i]);
        }        
    }
    return;
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

    Display(ptr, iSize);

    printf("Result is :\n");

    free(ptr);

    return 0;
}