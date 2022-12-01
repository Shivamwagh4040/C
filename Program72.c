// Accpet "N" numbers from user and count how many Even and Odd numbers are there in that "N" numbers.

#include<stdio.h>
#include<stdlib.h>

int DisplayEvenOddCount(int Arr[], int iSize)
{
    int iCnt = 0, iEvenCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
        
    }
    printf("Number of even elements are : %d\n",iEvenCnt);
    printf("Number of odd elements are : %d\n",iSize - iEvenCnt);
    
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    //step 2 : Aallocate the memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    //Step 4 : call the function

    iRet = DisplayEvenOddCount(ptr, iLength);

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}