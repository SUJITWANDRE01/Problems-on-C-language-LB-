#include <stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : OddDisplay
//  Description :   It Display the odd numbers upto given number
//  Input :         int
//  Output :        none
//  Author :        Sujit Wandre
//  Date :          23/10/2024
//
/////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

/////////////////////////////////////////////////////////////////////
//
// This program is used to print all Odd numbers upto given nunber
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}
