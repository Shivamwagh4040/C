//////////////////////////////////////////////////
// Steps to follow while programming
//////////////////////////////////////////////////

//Step 1   understand the problem statement
//Step 2   write the algorithm
//Step 3   Decide the programming language
//Step 4   Write the program
//Step 5   Test the program

////////////////////////////////////////////////////////////////////////////////////////////
//Problem statement : Accept number from user and check whether it is divisible by 5 or not
////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////
//Algorithm
///////////////////////////////////////////

/*
    start
        Accept number from user as NO
        Divide that NO by 5 and check the value if remainder
        If the value is 0
            then display as NO is divisible by 5
        Otherwise
            display as NO is not divisible by 5
    END
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////
//
// Function name : DivisibleByFive
// Description : To check whether input is divisible by 5 or not
// Input : Integer
// Output : Integer
// Author : Shivam Dhanesh Wagh
// Date : 14/10/2022 
//
/////////////////////////////////////////////////////////////////////////

bool DivisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;

    if(iAns == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//////////////////////////////////////////////////////////
//Entry point of the application
//////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter any number :\n");
    scanf("%d", &iValue);

    bRet = DivisibleByFive(iValue);
    if(bRet == 0)
    {
        printf("%d is not divisible by 5\n", iValue);
    }
    else
    {
        printf("%d is divisible by 5\n", iValue);
    }

    return 0;
}


//////////////////////////////////////////////////////////////////////
//
//Result
//Input : 25
//Output : 25 is divisible by 5
//
//////////////////////////////////////////////////////////////////////




