/*
   steps to develope the application
   step 1: understand the problem statement
   step 2: write the algorithm
   step 3: decide the programming language (c/c++/java/python)
   step 4: write the program
   step 5: test the program
*/

//Accept N numbers from user and perform the addition

//Input
//Value of N = 5
//Values : 10 20 30 40 50

//output
//Addition is : 150

//Algorithm
/*
    START
         Accept the number of elements from user
         allocate the memory to store that numbers
         Accept the numbers from user
         perform addition of all numbers
         display the addition
    END
*/


#include<stdio.h>      //for printf and scanf
#include<stdlib.h>

///////////////////////////////////////////////////
//
//application name : addition of N numbers
//Input : N numbers
//Outout : Addition
//Author : Shivam Wagh
//Date : 18 september 2022
//
//////////////////////////////////////////////////

int main()
{
    int *Arr = NULL;    //pointer to hold the address of array
    int iSize = 0;      //Variable to hold size of array
    int i = 0;          //Loop counter
    int iSum = 0;       // to hold the addition

    printf("please enter how many elements you want?\n");
    scanf("%d",&iSize);

    //alloctae the memory
    Arr = (int *)malloc(iSize * sizeof(int));
    printf("memory allocation is succesful\n");

    printf("Please enter the elements\n");

    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }

    //perforn addition
    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
 
    printf("Addition is :%d\n",iSum);
    
    free(Arr);
    printf("memory gets deallocated.\n");
    return 0;
}